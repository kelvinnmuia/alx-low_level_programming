#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copies the memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy to the memory
 * Return: Returns nothing
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	char *dest_ptr = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest_ptr);
}
