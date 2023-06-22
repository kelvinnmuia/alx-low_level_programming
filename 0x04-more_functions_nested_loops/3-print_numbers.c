#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function
 * Description: function that prints numbers to 9
 * Return Returns void
 */
void print_numbers(void)
{
	int nums = 0;

	while (nums <= 9)
	{
		_putchar('0' + nums);
		nums++;
	}
	_putchar('\n');
}
