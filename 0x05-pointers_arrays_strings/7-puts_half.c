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
	int st_index;

	if (length % 2 == 0)
		st_index = length / 2;
	else
		st_index = (length - 1) / 2;
	for (i = st_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
