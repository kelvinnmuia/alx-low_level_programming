#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strpbrk - function that searches a string
 * @s: string
 * @accept: accept
 * Return: Returns the occurence of the string
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
