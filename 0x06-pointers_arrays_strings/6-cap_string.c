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
	int i;
	int cap = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap && islower(str[i]))
			str[i] -= 32;
		cap = !isalpha(str[i]);
	}
	return (str);
}
