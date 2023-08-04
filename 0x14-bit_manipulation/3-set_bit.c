#include <stdio.h>
#include "main.h"
/**
 * set_bit -  function to set bit at given index
 * @n: the number to get bit from
 * @index: index
 * Return: returns the value of index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;

	return (1);
}
