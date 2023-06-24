#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints triangle with #
 * @size: the target size of the triangle
 * Return: Returns 0
 */
void print_triangle(int size)
{
	int i, j, spacing;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (spacing = 1; spacing <= size - i; spacing++)
			{
				_putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			if (i == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
