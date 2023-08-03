#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint -  function to convert binary number to unsigned int
 * @b: pointer to the binary number
 * Return: returns converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;

		if (*b == '1')
			result |= 1;
		b++;
	}
	return (result);
}
