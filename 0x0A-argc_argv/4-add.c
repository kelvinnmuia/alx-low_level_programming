#include <stdio.h>
#include <stdlib.h>
/**
 * main -function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int sum;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
