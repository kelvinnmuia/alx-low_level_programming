#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_diagsums - function that prints the sum of diagonals
 * @a: pointer to the matrix
 * @size: size of the matrix
 * Return: Returns nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, ldg_sum = 0, rdg_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				ldg_sum += *(a + i * size + j);
			}

			if ((i + j) == (size - 1))
			{
				rdg_sum += *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", ldg_sum, rdg_sum);
}
