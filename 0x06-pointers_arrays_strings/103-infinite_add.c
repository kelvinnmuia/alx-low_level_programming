#include "main.h"
#include <stdio.h>
 /**
 * infinite_add - function for adding strings
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: size
 * Returns: returns 1 or 0
 */

char *add_strings(char *n1, char *n2, char *r, int size_r)
{
	int num, tns = 0;

	for (; *n1 && *n2; n1--, n2---, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tns;
		*(r + size_r) = (num % 10) + '0';
		tns = num / 10;
	}

	for (; *n1, n1--, size_r++)
	{
		num = *(n1 - '0') + tns;
		*(r + size_r) = (num % 10) + '0';
		tns = num / 10;
	}

	for (; *n2, n2--, size_r++)
	{
		num = *(n2 - '0') + tns;
		*(r + size_r) = (num % 10) + '0';
		tns = num / 10;
	}
}
