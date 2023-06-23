#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - function to print numbers
 * Description: The function prints numbers from 0 to 9 except 2 and 4
 * Return: returns void
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar('0' + number);
		}
	}
	_putchar('\n');
}
