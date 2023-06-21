#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints numbers to 98
 * @n: starting integer
 * Return: returns 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
}
