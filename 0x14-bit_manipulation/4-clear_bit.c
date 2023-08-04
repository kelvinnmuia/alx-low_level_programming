#include <stdio.h>
#include "main.h"
/**
 * clear_bit -  function to set the value of bit to 0 at given index
 * @n: the number whose bit get cleared
 * @index: index
 * Return: returns 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~mask;
	*n &= mask;

	return (1);
}
