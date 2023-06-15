#include <stdio.h>
/**
 * main - function
 * Description: Starting point of the program execution
 * Return: always return 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	/*sizeof determines the size of the variable*/
	printf("Size of char: %lu byte(s)\n",(unsigned long)sizeof(charType));
	printf("Size of int: %lu byte(s)\n",(unsigned long)sizeof(intType));
	printf("Size of long int: %lu byte(s)\n",(unsigned long)sizeof(longIntType));
	printf("Size of long long int: %lu byte(s)\n",(unsigned long)sizeof(longLongIntType));
	printf("Size of float: %lu byte(s)\n",(unsigned long)sizeof(floatType));

	return (0);
}
