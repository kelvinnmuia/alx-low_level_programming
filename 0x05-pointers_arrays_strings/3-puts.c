#include <stdio.h>
#include "main.h"
/**
 * _puts - function
 * @str: Target string
 * Return: Returns 0
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}
