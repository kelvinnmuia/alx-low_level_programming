#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints numbers to 98
 * @n: starting integer
 * Return: returns 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
