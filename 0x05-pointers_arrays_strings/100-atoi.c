#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * _atoi - function
 * @s: The string
 * Return: Returns 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = (result * 10) + digit;
		s++;
	}
	return (result * sign);
}
