#include <stdio.h>
/**
 * print_alphabet - function that prints alphabets
 * Description: prints alphabets letters in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';
	/*while loop to print the letters*/
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
}
