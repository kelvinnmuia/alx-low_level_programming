#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function that checks endianess of a machine
 * Return: returns little or big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (*ptr);
}
