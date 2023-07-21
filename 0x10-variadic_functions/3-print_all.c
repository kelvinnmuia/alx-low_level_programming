#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: format specifier
 * Return: Returns nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *s;
	char *sep = "";

	if (format)
	{
		/* Initializing argument to the list pointer */
		va_start(args, format);

		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);

					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
	
