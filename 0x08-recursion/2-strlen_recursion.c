#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - function that prints a string in reverse
 * @s: the string
 * Return: Returns nothing
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	else
	{
		return (0);
	}
}

