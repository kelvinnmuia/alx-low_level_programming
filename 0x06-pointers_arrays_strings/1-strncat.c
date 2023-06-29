#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - function
 * @dest: destination
 * @src: source
 * @n: sizein bytes
 * Return: returns concatnated characters
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

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
	return (ptr);
}
