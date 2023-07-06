#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * wildcmp - function that compares two strings
 * @s1: the first string pointer
 * @s2: the second string pointer
 * Return: Returns 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));

		else if (wildcmp(s1 + 1, s2))
			return (1);
		else
			return (wildcmp(s1 + 1, s2));
	}

	if (*s1 != *s2)
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}
