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
	/*loops through to print numbers from 0 to 9*/
	while (hexNum <= '9')
	{
		putchar(hexNum);
		hexNum++;
	}
	/*loops through to print letters from a to f*/
	hexNum = 'a';
	while (hexNum <= 'f')
	{
		putchar(hexNum);
		hexNum++;
	}

	putchar('\n');

	return (0);
}
