#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function
 * @dest: The destination
 * @src: The source
 * Return: Returns 0
 */
char *_strcpy(char *dest, char *src)
{
	char *o_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (o_dest);
}
