#include <stdio.h>
#include "main.h"
/**
 * print_number - function to print integers
 * @n: Target number
 * Return: Returns void
 */
void print_number(int n)
{
	unsigned int number = n;
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(n / 10);

	_putchar('0' + (number % 10));

}
