#include <stdio.h>
#include "main.h"
/**
 * _strncat - function
 * @dest: destination
 * @src: source
 * @n: size in bytes
 * Return: resturns concatnated characters
 */
char *_strncat(char *dest, char *src, int n)
{
	char d_addr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
