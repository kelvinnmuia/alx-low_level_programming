#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all parameters
 * @n: the number of arguments 
 * Return: Returns the sum of the arguments passed to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	/* Declaring pointers to the argument list */
	va_list args;
	/* Initializing argument to the list pointer */
	va_start (args, n);
	if (n == 0)
		return (0);
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
