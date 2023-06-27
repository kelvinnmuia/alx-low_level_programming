#include <stdio.h>
#include "main.h"
/**
 * puts2 - function
 * @str: The string
 * Return: Returns 0
 */
void puts2(char *str)
{
	int length = _strlen(str);
	int f_half;
	int s_half;
	int i;

	if (length % 2 == 0)
		f_half = length / 2;
	else
		s_half = (length - 1) / 2;
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
