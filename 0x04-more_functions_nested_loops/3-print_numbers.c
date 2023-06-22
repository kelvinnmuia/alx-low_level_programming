#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function
 * Description: The function prints numbers from 0 to 9
 * Return: Returns 0
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
