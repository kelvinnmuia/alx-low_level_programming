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
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
