#include <stdio.h>
/**
 * main - function
 * Description: Entry point
 * Return: Always 0 success
 */
int main(void)
{
	/*Declare str array and variable i*/
	char str[20] = "_putchar\n";
	int i = 0;

	/*while loop to loop through the str array*/
	while (i < 11)
	{
		putchar(str[i]);
		i++;
	}

	return (0);
	
}	
