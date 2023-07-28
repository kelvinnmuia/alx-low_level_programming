#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_lines - function to print string before executing main
 * Description: the functions prints lines of strings
 * Return: returns nothing
 */
void print_lines(void) __attribute__((constructor));

void print_lines(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
