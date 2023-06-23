#include <stdio.h>
/**
 * main - program to validate fiz, buz, and fizbuzz numbers from 1 to 100
 *
 * Return: Returns 0
 *
 */
int main(void)
{
	int i;

	/* for loop to print the numbers from 1 to 100*/
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3 == 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
