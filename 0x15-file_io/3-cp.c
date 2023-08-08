#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - programs entry point
 * @ac: the number of arguments
 * @av: the array of argument strings
 * Return: returns 1 or -1
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, btr, btw;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		return (97);
	}

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: can't read from %s\n", av[1]);
		return (98);
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(2, "Error: can't write to %s\n", av[2]);
		close(fd_from);
		return (99);
	}

	while ((btr = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		btw = write(fd_to, buffer, btr);

		if (btw != btr)
		{
			dprintf(2, "Error: can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (btr == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", av[1]);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_from);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_to);
		return (100);
	}
	return (0);
}
