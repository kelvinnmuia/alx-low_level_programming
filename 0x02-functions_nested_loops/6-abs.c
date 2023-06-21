#include <stdio.h>
#include "main.h"
/**
 * _abs - function for determining absolute value of a number
 * @i: number to be checked
 * Return: 1 or 0
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}

	else if (i < 0)
	{
		return (-i);
	}

	else
	{
		return (0);
	}
}
