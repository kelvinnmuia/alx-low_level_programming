#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function
 * @s1: first string to concatnate
 * @s2: second string to concatnate
 * @n: number of characters from s2 to concatnate
 * Return: returns nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	/*resulting string full length*/
	size_t full_len = s1_len + n;
	/*allocating memory for the result*/
	char *ptr = malloc((full_len + 1) * sizeof(char));

	/*handling Null strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*if n is greater than s2 use the entire string*/
	if (n >= s2_len)
		n = s2_len;

	if (ptr == NULL)
		return (NULL);

	/*copying s1 into the resulting string*/
	strcpy(ptr, s1);
	/*concatnate*/
	strncat(ptr, s2, n);

	return (ptr);
}
