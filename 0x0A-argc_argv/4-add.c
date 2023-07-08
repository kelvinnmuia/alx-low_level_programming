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
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);
		int j = 0;

		while (argv[i][j] != '\0')
		{

		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		j++;
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
