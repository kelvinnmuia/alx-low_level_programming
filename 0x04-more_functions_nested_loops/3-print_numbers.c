#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function to print numbers
 * Description: The function prints numbers from 0 to 9
 * Return: returns void
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0' + number);
	}
	_putchar('0' + number);
}
