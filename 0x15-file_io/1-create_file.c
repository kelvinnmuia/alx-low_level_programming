#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - function that creates file
 * @filename: the name of the file
 * @text_content: the content to write to the file
 * Return: returns 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
