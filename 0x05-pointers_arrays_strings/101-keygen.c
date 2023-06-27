#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 * Description: The program's Entry point
 * Return: Returns 0
 */

int main(void)
{
	char password[9];
	int i;

	srand(time(NULL));


	for (i = 0; i < 8; i++)
	{
		int password_type = rand() % 3;

		if (password_type == 0)
		{
			password[i] = rand() % 26 + 'a';
		}
		else if (password_type == 1)
		{
			password[i] = rand() % 26 + 'A';
		}
		else
		{
			password[i] = rand() % 26 + '0';
		}
	}
	password[8] = '\0';
	printf("%s\n", password);

	return (0);

}
