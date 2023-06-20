#include <stdio.h>
/**
 * print_alphabet_x10 - function that prints alphabets
 * Description: prints alphabets letters in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphab = 'a';
	int i = 0;
	/*while loop to print the letters*/
	while (i <= 10)
	{
		while (alphab <= 'z')
		{
			putchar(alphab);
			alphab++;
		}
		putchar('\n');
		alphab = 'a';
		i++;
	}
}
