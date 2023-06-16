#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: starting point for the program execution
 * Return: returns 0
 */
int main(void)
{
	char hexNum = '0';
	/*loops through to print lowercase alphabets*/
	while (hexNum <= '9')
	{
		putchar(hexNum);
		hexNum++;
	}
	/*loops through to print uppercase alphabets*/
	hexNum = 'a';
	while (hexNum <= 'f')
	{
		putchar(hexNum);
		hexNum++;
	}

	putchar('\n');

	return (0);
}
