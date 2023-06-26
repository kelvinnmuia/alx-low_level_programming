#include <stdio.h>
#include "main.h"
/**
 * puts2 - function
 * @str: The string
 * Return: Returns 0
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		length / 2;
	else
		(length - 1) / 2;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}

	_putchar('\n');
}
