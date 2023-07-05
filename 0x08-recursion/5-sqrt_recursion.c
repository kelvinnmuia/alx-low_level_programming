#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - function that finds sqrt
 * @n: the number
 * Return: Returns 1 or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function
 * @n: number
 * @g: estimated sqrt
 * Return: returns 1 or 0
 */

int find_sqrt(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g > n / g)
		return (-1);

	return (find_sqrt(n, g + 1));
}
