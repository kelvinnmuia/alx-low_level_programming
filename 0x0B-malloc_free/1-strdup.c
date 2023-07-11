#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function
 * @str: the string to be copied
 * Return: Returnsa pointer to copy of the string
 */
char *_strdup(char *str)
{
	int i;
	int length = strlen(str);
	char *ptr = malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		for (i = 0; i <= length; i++)
		{
			ptr[i] = str[i];
		}
	}

	return (ptr);
}
