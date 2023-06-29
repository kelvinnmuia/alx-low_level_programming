#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - function
 * @str: the string
 * Return: returns string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
