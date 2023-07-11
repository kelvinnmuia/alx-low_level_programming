#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - function
 * @s1: the first string
 * @s2: the second string 
 * Return: Returns a concatnated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j;
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	size_t full_len = s1_len + s2_len;
	char *ptr = malloc((full_len + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < s2_len; i++, j++)
	{
		ptr[i] = s2[j];
	}

	ptr[full_len] = '\0';

	return (ptr);
}
