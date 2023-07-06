#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - function that determines prime numbers
 * @n: the number
 * Return: Returns 1 or -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (find_pn(n, n - 1));
}

/**
 * find_pn - helper function
 * @n: number
 * @d: divisor
 * Return: returns 1 or 0
 */

int find_pn(int n, int d)
{
	if (d == 1)
		return (1);

	if (n % d == 0)
		return (0);

	return (find_pn(n, d - 1));
}
