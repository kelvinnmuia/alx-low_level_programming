#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: starting point for the program execution
 * Return: returns 0
 */
int main(void)
{
	char hapla = 'z';
	/*loops through to print the alphabets*/
	while (hapla >= 'a')
	{
		putchar(hapla);
		hapla--;
	}

	putchar('\n');

	return (0);
}
