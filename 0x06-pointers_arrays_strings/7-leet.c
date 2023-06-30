#include "main.h"
#include <stdio.h>
/**
 * leet - function
 * @str: the string
 * Return: returns string
 */
char *leet(char *str)
{
	char *p = str;
	char arr[] = {'a', 'e', 'o', 'l', 't'};
	char nums[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == arr[i] || *str == arr[i] - 32)
			{
				*str = nums[i] + '0';
			}
			str++;
		}
	}
	return (p);
}
