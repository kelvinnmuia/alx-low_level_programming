#include <stdio.h>
#include "main.h"
/**
 * print_buffer - function
 * @b: buffer
 * @size: size
 * Return: returns 0
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf('\n');
		return;
	
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", b[i + j]);
			}

			if (b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
			{
				prtintf(".");
			}

			else
			{
				printf("   ")
			}


		}
	}
	printf("\n");
}
