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
	int i;

	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length - 1) / 2;
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
