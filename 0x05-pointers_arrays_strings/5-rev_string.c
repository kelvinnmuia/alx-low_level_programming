#include <stdio.h>
#include "main.h"
/**
 * rev_string - function
 * @s: Target string
 * Return: Returns 0
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	int j = length - 1;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
