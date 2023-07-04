#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_chessboard - function that prints chessboard
 * @a: array
 * Return: Returns nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
