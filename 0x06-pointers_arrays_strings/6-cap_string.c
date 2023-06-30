#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * cap_string - function
 * @str: the string
 * Return: returns string
 */
char *cap_string(char *str)
{
	char *ptr;
	int cap = 1;

	for (ptr = str; *ptr != '\0'; ptr++)
	{
		if (cap && islower(*ptr))
			*ptr -= 32;
		cap = !isalpha(*ptr);
	}
	return (str);
}
