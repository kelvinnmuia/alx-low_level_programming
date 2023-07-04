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

	while (*s != '\0' && *accept != '\0')
	{

		if (*s == *accept)
		{
			length++;
		}

		else
		{
			break;
		}

		s++;
		accept++;
	}
	return (length);
}
