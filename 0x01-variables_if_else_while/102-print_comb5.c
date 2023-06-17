#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: starting point for the program execution
 * Return: returns 0
 */
int main(void)
{
	int i = 0;
	int j = 0;
	/*loops through to print the numbers*/
	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			
			}

			j++;

		}

		i++;
		
	}

	putchar('\n');

	return (0);
}
