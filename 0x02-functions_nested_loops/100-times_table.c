#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function to return time
 * @n: function argument
 * Return: returns 0
 */
void print_times_table(int n)
{
	int row = 0;

	if (n < 0 || n > 15)
	{
		return;
	}

	while (row <= n)
	{
		int colmn = 0;

		while (colmn <= n)
		{
			int result = row * colmn;

			int digit = result;

			if (digit >= 10)
			{
				while (digit >= 10)
				{
					_putchar('0' + digit / 10);
						digit %= 10;
				}
			}

			_putchar('0' + digit);

			if (colmn != n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			colmn++;
		}
		_putchar('\n');
		row++;
	}
}

