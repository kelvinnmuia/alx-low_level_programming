#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * set_string - function that sets the value of pointer to a char
 * @s: pointer to the char
 * @to: to
 * Return: Returns nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
