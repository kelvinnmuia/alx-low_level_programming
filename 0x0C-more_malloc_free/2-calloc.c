#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function
 * @nmemb: number of elements
 * @size: size of elements
 * Return: returns nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*Compute total size of memory to allocate*/
	unsigned int total_size = nmemb * size;
	/*allocate memory with malloc*/
	void *ptr = malloc(total_size);
	/*validate whether nmemb or size is null*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	/*set allocated memory to zero*/
	memset(ptr, 0, total_size);

	return (ptr);
}
