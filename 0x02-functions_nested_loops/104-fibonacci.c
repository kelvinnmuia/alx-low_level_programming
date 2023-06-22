#include <stdio.h>
#include "main.h"

/**
 * main - function
 * Description: Entry point
 * Return: Returns 0
 */
int main(void)
{
	int counter;
	unsigned long num1 = 0, num2 = 1, num3;
	unsigned long num1_hc1, num1_hc2, num2_hc1, num2_hc2;
	unsigned long hc1, hc2;

	for (counter = 0; counter < 92; counter++)
	{
		num3 = num1 + num2;
		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
	}
	num1_hc1 = num1 / 10000000000;
	num2_hc1 = num2 / 10000000000;
	num1_hc2 = num1 % 10000000000;
	num2_hc2 = num2 % 10000000000;

	for (counter = 93; counter < 99; counter++)
	{
		hc1 = num1_hc1 + num2_hc1;
		hc2 = num1_hc2 + num2_hc2;

		if ((num1_hc2 + num2_hc2) > 9999999999)
		{
			hc1 += 1;
			hc2 %= 10000000000;
		}
		printf("%lu%lu", hc1, hc2);
		if (counter != 98)
			printf(", ");

		num1_hc1 = num2_hc1;
		num1_hc2 = num2_hc2;
		num2_hc1 = hc1;
		num2_hc2 = hc2;
	}
	printf("\n");
	return (0);
}
