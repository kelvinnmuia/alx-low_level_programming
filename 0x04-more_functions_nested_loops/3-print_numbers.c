#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function
 * Description: The function prints numbers from 0 to 9
 * Return: Returns 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
