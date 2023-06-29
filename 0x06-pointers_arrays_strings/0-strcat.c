#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - function
 * @dest: destination
 * @src: source
 * Return: returns concatnated characters
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
