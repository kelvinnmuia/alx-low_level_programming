#include <stdio.h>
#include "main.h"
/**
 * Print_numbers - function
 * Description: function that prints numbers
 * Return: returns void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

}
