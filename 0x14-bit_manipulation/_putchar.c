#include <unistd.h>
/**
 * __putchar - function to print characters to the stdout
 * @c: character to be written
 * Return: returns character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
