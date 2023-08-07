#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - function that reads a file and prints it to posix stdout
 * @filename: the name of the file
 * @letters: number of letters
 * Return: returns a file content
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t tbw = 0;
	ssize_t tbr = 0;
	char *buffer;
	FILE *file;

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
	{
		free(buffer);
		return (0);
	}

	tbr = fread(buffer, sizeof(char), letters, file);

	if (tbr <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);

	tbw = write(STDOUT_FILENO, buffer, tbr);
	if (tbw < tbr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	return (tbw);
}
