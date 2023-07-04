#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix string
 * @s: string
 * @accept: accept
 * Return: Returns length of prefix string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int found = 0;
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				found = 1;
			}
		}
		if (!found)
			return (length);
		found = 0;
		s++;
	}
	return (length);
}
