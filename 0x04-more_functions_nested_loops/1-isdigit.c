#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function
 * @c: Targeted character
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
