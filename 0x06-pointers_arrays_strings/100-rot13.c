#include "main.h"
#include <stdio.h>
/**
 * rot13 - function
 * @s: the string
 * Return: returns string
 */
char *rot13(char *s)
{
	char x, *ptr = s;

	while (*s)
	{
		x = 65 + (*s & 32);

		if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
		{
			*s = (*s - x + 13) % 26 + x;
		}
		s++;
	}
	return (ptr);
}
