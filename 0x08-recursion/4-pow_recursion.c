#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function tht returns the power of numbers
 * @x: base number
 * @y: power to the base number
 * Return: Returns 1 or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
