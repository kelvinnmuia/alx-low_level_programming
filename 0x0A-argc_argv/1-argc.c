#include <stdio.h>
/**
 * main -function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%s\n", argc - 1);

	return (0);
}
