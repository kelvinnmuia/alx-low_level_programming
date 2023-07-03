#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of prefix substring
 * @s: string
 * @accept: accept
 * Return: Returns nothing
 */
char *_strspn(char *s, char accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;

		for (int i = 0; accept[i]; != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
		{
			return (count);
		}
		count++;
		s++;
	}

	return (count);

}
