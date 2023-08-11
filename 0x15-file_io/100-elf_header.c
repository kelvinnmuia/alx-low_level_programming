#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <string.h>

/**
 * print_error - helper function to print error
 * @errmsg: error message
 * Return: returns nothing
 */
void print_error(const char *errmsg)
{
	fprintf(stderr, "%s\n", errmsg);
	exit(98);
}
/**
 * print_required_info - helper function to print the required info
 * @info: pointer to the required elf info
 * Return: returns the required elf info
 */
int print_required_info(const char *info)
{
	return	(strstr(info, "Magic:") ||
		 strstr(info, "Class:") ||
		 strstr(info, "Data:") ||
		 strstr(info, "Version:") ||
		 strstr(info, "OS/ABI:") ||
		 strstr(info, "ABI Version") ||
		 strstr(info, "Type:") ||
		 strstr(info, "Entry Point Address:"));
}
/**
 * print_elfhd_info - function to display elf header info
 * @filename: pointer to the elf file
 * Return: returns nothing
 */
void print_elfhd_info(const char *filename)
{
	FILE *fp = fopen(filename, "r");
	char command[256];
	FILE *readelf_fp = popen(command, "r");
	char buffer[1024];
	int counter = 0;

	if (!fp)
	{
		fprintf(stderr, "Error opening the file: %s\n", filename);
		exit(98);
	}
	snprintf(command, sizeof(command), "readelf -h %s", filename);

	if (!readelf_fp)
	{
		print_error("Error executing readelf command");
	}

	printf("ELF Header:\n");

	while (fgets(buffer, sizeof(buffer), readelf_fp))
	{
		if (print_required_info(buffer))
		{
			printf(" %s", buffer);
			counter++;
		}

		if (counter >= 8)
		{
			break;
		}
	}

	if (counter < 8)
	{
		print_error("Error reading the elf header");
	}
	pclose(readelf_fp);
	fclose(fp);
}
/**
 * main - program entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: returns 1 or 0
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
