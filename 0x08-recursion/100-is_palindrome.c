#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that determines prime numbers
 * @s: the string pointer
 * Return: Returns 1 or -1
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (palindrome_hf(s, 0, length - 1));
}

/**
 * palindrome_hf - helper function
 * @s: the string
 * @i: starting point of the string
 * @j: ending point of the string
 * Return: returns 1 or 0
 */

int palindrome_hf(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (palindrome_hf(s, i + 1, j - 1));
}
