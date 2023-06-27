#include <stdio.h>
#include "main.h"
/**
 * puts_half - function
 * @str: The string
 * Return: Returns 0
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = (length / 2);
	}
	else
	{
		n = (length - 1) / 2;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
