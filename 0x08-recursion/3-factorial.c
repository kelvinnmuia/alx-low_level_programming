#include <stdio.h>
#include "main.h"
/**
 * factorial - function that returns the factorial of numbers
 * @n: the number
 * Return: Returns 1 or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
