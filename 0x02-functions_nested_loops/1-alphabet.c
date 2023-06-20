#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function that prints alphabets
 * Description: prints alphabet in lowercase from a to z
 * Return: returns void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	/*while loop to print the alphabets*/
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
}
/**
 * main - function
 * Description: Entry point
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
