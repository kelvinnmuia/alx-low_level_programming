#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset - function that fills the memory with a constant byte
 * @s: pointer to the memory location
 * @b: constant byte
 * @n: number of bytes to fill the memory
 * Return: Returns nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
