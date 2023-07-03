#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strchr - function that copies the memory area
 * @s: string
 * @c: characters
 * Return: Returns nothing
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
