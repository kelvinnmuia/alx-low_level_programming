#include <stdio.h>
#include "main.h"
/**
 * _islower - function to check whether character is lowercase
 * @c: character to be checked
 * Return: Returns 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
