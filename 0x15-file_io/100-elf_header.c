#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>

#define ELF_HEADER_SIZE sizeof(Elf64_Ehdr)
/**
 * print_elfhd_info - function to print the elf information
 * @filename: pointer to the file name
 * Return: returns elf header information
 */
void print_elfhd_info(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	int is_elf = 1;
	int i;
	Elf64_Ehdr hdr;
	char *class_type, *data_type, *os_abi, *type_str;

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}

	if (read(fd, &hdr, ELF_HEADER_SIZE) != ELF_HEADER_SIZE)
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", filename);
		close(fd);
		exit(98);
	}

	for (i = 0; i < EI_MAG3 + 1; i++)
	{
		if (hdr.e_ident[i] != ELFMAG[i])
		{
			is_elf = 0;
			break;
		}
	}

	if (!is_elf)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", filename);
		close(fd);
		exit(98);
	}

	printf("Magic:\t");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", hdr.e_ident[i]);
	}
	printf("\n");

	class_type = (hdr.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32";
	printf("Class:\t %s\n", class_type);

	data_type = (hdr.e_ident[EI_DATA] == ELFDATA2LSB)
		? "2's complement, little endian"
		: "Unknown";
	printf("Data:\t %s\n", data_type);

	printf("Version:\t %d (current)\n", hdr.e_ident[EI_VERSION]);

	os_abi = (hdr.e_ident[EI_OSABI] == ELFOSABI_SYSV)
		? "UNIX - System V"
		: "Unknown";
	printf("OS/ABI:\t %s\n", os_abi);

	printf("ABI Version: %d\n", hdr.e_ident[EI_ABIVERSION]);

	type_str = (hdr.e_type == ET_EXEC) ? "EXEC (Executable file)" : "Unknown";
	printf("Type: %s\n", type_str);

	printf("Entry point address:\t 0x%lx\n", hdr.e_entry);

	close(fd);
}
/**
 * main - program entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: returns 1 or 0;
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	print_elfhd_info(argv[1]);
	return (0);
}
