#include <stdio.h>
#include "main.h"
/**
 * print_rev - function
 * @s: Target string
 * Return: Returns 0
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
