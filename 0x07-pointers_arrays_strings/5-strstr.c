#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strstr - function that searches a string
 * @haystack: haystack
 * @needle: needle
 * Return: Returns string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (!needle[j])
		{
			return (&haystack[i]);
		}

	}

	return (NULL);
}
