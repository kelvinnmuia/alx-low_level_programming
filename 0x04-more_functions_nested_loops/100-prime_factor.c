#include <stdio.h>
/**
 * main - function
 * Description: program prints the largest factor of a number
 * Return: Returns 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_pf = 2;

	while (number > largest_pf)
	{
		if ((number % largest_pf == 0))
		{
			number /= largest_pf;
		}
		else
		{
			largest_pf++;
		}
	}
	printf("%ld\n", largest_pf);
	return (0);
}
