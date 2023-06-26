#include <stdio.h>
#include "main.h"
/**
 * puts2 - function
 * @s: Target string
 * Return: Returns 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i += 2;
	}
	_putchar('\n');
}
