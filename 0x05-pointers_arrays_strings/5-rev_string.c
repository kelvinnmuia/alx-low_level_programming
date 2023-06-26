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
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	_putchar('\n');
}
