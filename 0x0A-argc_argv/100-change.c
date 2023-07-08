#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i, cents;
	int num_coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int denominations_counter = sizeof(denominations) / sizeof(denominations[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < denominations_counter; i++)
	{
		num_coins += cents / denominations[i];
		cents %= denominations[i];
	}

	printf("%d\n", num_coins);
	return (0);

}
