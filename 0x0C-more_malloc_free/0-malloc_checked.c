#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function
 * @b: size in bytes to allocate
 * Return: returns nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc_checked(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
