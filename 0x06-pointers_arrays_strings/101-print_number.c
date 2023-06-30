#include "main.h"
#include <stdio.h>
/**
 * print_number - function
 * @n: the number
 * Return: returns 0
 */
void print_number(int n)
{
	unsigned int nums = n;

	if (n < 0)
	{
		_putchar('-');
		nums = -nums
	}

	if ((nums / 10) != 0)
		print_number(nums / 10);

	_putchar((nums % 10) + '0');
}
