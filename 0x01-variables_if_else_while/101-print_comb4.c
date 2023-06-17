#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: starting point for the program execution
 * Return: returns 0
 */
int main(void)
{
	int i = 0, j = 1, k = 2;
	/*loops through to print the numbers*/
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');

				}

				k++;
			}

			j++;
			k = j + 1;

		}

		i++;
		j = i + 1;
		k = j + 1;
	}

	putchar('\n');

	return (0);
}
