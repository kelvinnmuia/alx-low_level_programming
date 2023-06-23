#include <stdio.h>
#include "main.h"
/**
 * print_line - function to print numbers
 * @n: The target number of times
 * Return: returns void
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
