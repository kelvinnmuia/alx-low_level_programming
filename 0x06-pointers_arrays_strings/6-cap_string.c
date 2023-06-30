#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - function
 * @str: the string
 * Return: returns string
 */
char *cap_string(char *str)
{
	int cap = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (cap && islower(*ptr))
		{
			*ptr = toupper(*ptr)
		}
		cap = 0;
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr =='"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap = 1;
		}
		*ptr++;

	}
	return (str);
}
