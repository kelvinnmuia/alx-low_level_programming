#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - function
 * @ac: arguments counter
 * @av: arguments vector
 * Return: Returns a 2d array
 */
char *argstostr(int ac, char **av)
{
	int full_len = 0;
	int i, j;
	char *ptr = malloc((full_len + 1) * sizeof(char));
	int curr_position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		full_len += strlen(av[i]) + 1;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		int length = strlen(av[i]);

		for (j = 0; j < length; j++)
		{
			ptr[curr_position++] = av[i][j];
		}
		ptr[curr_position++] = '\n';
	}
	ptr[curr_position] = '\0';

	return (ptr);

}
