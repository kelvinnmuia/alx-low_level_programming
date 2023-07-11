#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - function
 * @size: size of memory to allocate
 * @c: the characters
 * Return: Returns a string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
