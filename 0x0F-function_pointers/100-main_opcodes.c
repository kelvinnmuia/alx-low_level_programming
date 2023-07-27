#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: arguments counter
 * @argv: arguments vecto
 * Return: Returns 1 or 0
 */
int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	char *fp;

	if (argc != 2)
	{
		puts("Error\n");
		return (1);
	}

	if (n < 0)
	{
		puts("Error\n");
		return (2);
	}

	fp = (char *)main;
	for (; n > 0; n--, fp++)
	{
		printf("%02x", *fp & 0xff);
		if (n != 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

