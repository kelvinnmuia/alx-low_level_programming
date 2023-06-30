#include "main.h"
#include <stdio.h>
/**
 * Infinite_add - function for infinte add
 * @n1: the first number
 * @n2: the second number
 * @r: result
 * @size_r: index of buffer
 * Returns: returns 1 or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

}
/**
 * add_strings - function for adding strings
 * @n1: first number
 * @n2: second number
 * @r: result
 * @r_idx: index of buffer
 * Returns: returns 1 or 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_idx)
{
	int num, tns = 0;

	for (; *n1 && *n2; n1--, n2---, r_idx--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tns;
		*(r + r_idx) = (num % 10) + '0';
		tns = num / 10;
	}

	for (; *n1, n1--, r_idx++)
	{
		num = *(n1 - '0') + tns;
		*(r + r_idx) = (num % 10) + '0';
		tns = num / 10;
	}

	for (; *n2, n2--, r_idx++)
	{
		num = *(n2 - '0') + tns;
		*(r + r_idx) = (num % 10) + '0';
		tns = num / 10;
	}
}
