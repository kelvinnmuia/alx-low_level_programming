#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: starting point for the program execution
 * Return: returns 0
 */
int main(void)
{
	char lowerAlpha = 'a';
	char upperAlpha = 'A';
	/*loops through to print lowercase alphabets*/
	while (lowerAlpha <= 'z')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}
	/*loops through to print uppercase alphabets*/
	while (upperAlpha <= 'Z')
	{
		putchar(upperAlpha);
		upperAlpha++;
	}

	putchar('\n');

	return (0);
}
