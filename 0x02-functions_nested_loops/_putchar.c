#include <stdio.h>
#include "main.h"
/**
 * _putchar - function
 * Description: Prints _putchar on the screen
 * Returns: Always 0
 */
void _putchar(void)
{
	/*Declare str array and variable i*/
	char str[20] = "_putchar\n";
	int i = 0;

	/*while loop to loop through the str array*/
	while (i < 9)
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
