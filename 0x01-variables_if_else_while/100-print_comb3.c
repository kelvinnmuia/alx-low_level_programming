#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: starting point for the program execution
 * Return: returns 0
 */
int main(void)
{
	int i = 0, j = 1;
	/*loops through to print the numbers*/
	while (i <= 8)
	{
		putchar(i + '0');
		putchar(j + '0');

		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}

		j++;

		if (j > 9)
		{
			i++;
			j = i + 1;
		}
	}

	putchar('\n');

	return (0);
}
