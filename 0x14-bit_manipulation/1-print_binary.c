#include <stdio.h>
#include "main.h"
/**
 * print_binary -  function to print binary number
 * @n: the number to print in binary
 * Return: returns converted number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int lz = 1;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			lz = 0;
		}
		else if (!lz)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (lz)
		_putchar('0');
}
