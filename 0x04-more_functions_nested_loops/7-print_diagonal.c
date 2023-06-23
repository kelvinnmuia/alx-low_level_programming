#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - function to print numbers
 * @n: The targeti number of times
 * Return: returns void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		/*Outer loop to print the diagonal lines*/
		for (i = 0; i < n; i++)
		{
			/*Inner loop to create space*/
			for (j = 0; j < i; j++)
			{
				_putchar(' ');

			}
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
