#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: starting point for the program execution
 * Return: returns 0
 */
int main(void)
{
	int numz = 0;
	/*loops through to print the numbers*/
	while (numz <= 9)
	{
		putchar(numz + '0');
		numz++;
	}

	putchar('\n');

	return (0);
}
