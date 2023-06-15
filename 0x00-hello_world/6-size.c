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

	//sizeof determines the size of the variable
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longIntType));
	printf("Size of long long int: %zu bytes\n", sizeof(longLongIntType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return 0;
}
