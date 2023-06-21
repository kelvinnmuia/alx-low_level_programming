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
	printf("The sum of multiples of 3 or 5 below %d is: %d\n", limit, sum);

	return (0);
}
