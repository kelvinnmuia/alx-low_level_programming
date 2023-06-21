#include <stdio.h>
#include "main.h"
/**
 * main - function
 * Description: Entry point
 * Return: returns 0
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int num = 0;

	while (num < limit)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
		num++;
	}
}
