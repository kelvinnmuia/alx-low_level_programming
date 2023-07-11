#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function
 * @str: the pointer to a string
 * Return: Returns a string
 */
char *_strdup(char *str)
{
	size_t length = strlen(str) + 1;
	char *duplicate = malloc(length);

	if (str == NULL)
	{
		return (NULL);
	}

	if (duplicate != NULL)
	{
		memcpy(duplicate, str, length);
	}

	return (duplicate);
}
