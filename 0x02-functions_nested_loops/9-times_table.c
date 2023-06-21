#include <stdio.h>
#include "main.h"
/**
 * times_table - function to return time
 * Description: generates the multiple table of 9
 * Return: returns 0
 */
void times_table(void)
{
	int digit = 0;
	int multiplier, result;

	while (digit <= 9)
	{
		_putchar('0');

		multiplier = 1;
		while (multiplier <= 9)
		{
			_putchar(',');
			_putchar(' ');
			result = digit * multiplier;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
			multiplier++;
		}

		_putchar('\n');
		digit++;
	}
}
