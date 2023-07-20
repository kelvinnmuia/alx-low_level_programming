#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string printed between strings
 * @n: number of parameters
 * Return: Returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/* Declaring pointers to the argument list */
	va_list args;
	/* Initializing argument to the list pointer */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}

		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
