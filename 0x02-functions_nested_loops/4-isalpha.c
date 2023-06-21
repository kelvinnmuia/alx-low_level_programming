#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function to check whether character is lowercase
 * @c: character to be checked
 * Return: Returns 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
