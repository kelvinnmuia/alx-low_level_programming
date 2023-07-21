#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - function to print name
 * @name: the name to be printed
 * @f: pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
