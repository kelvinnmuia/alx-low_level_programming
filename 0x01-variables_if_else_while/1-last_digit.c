#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - function
 * Description: Entry point of the program execution
 * Return: returns 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = abs(n % 10);

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}

	return (0);
}
