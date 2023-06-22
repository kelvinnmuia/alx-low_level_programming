#include <stdio.h>
#include "main.h"
/**
 * print_fibonacci - function
 * @n: parameter
 * Return: returns 0
 */
void print_fibonacci(int n)
{
	int first = 1;
	int second = 2;
	int counter;

	printf("%d, %d", first, second);

	for (counter = 3; counter <= n; counter++)
	{
		int next = first + second;

		printf(", %d", next);

		first = second;
		second = next;
	}

	printf("\n");
}

/**
 * main - function
 * Description: Entry point
 * Return: Returns 0
 */
int main(void)
{
	int n = 50;

	print_fibonacci(n);
	return (0);
}
