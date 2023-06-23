#include <stdio.h>
#include "main.h"
/**
 * print_square - function to print numbers
 * @size: The size of the square
 * Return: returns void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		/*Outer loop to print length of squares*/
		for (i = 0; i < size; i++)
		{
			/*Inner loop to print width of squares*/
			for (j = 0; j < size; j++)
			{
				_putchar('#');

			}

			if (i == size - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
