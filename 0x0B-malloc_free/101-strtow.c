#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * word_counter - function
 * @str: the string
 * Return: returns the number of words in the string
 */
int word_counter(char *str)
{
	int i;
	int j = 0;
	int wc = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			j = 0;
		}

		else if (!j)
		{
			j = 1;
			wc++;
		}
	}
	return (wc);
}

/**
 * strtow - function
 * @str: string to be splitted
 * Return: returns splitted string
 */
char **strtow(char *str)
{
	int i;
	int k = 0;
	int num_words;
	char **ptr;

	if (str == NULL)
		return (NULL);

	num_words = word_counter(str);

	if (!num_words)
		return (NULL);

	ptr = malloc((num_words + 1) * sizeof(ptr));

	if (ptr == NULL)
		return (NULL);

	while (*str)
	{
		if (*str == ' ')
		{
			str += 1;
			continue;
		}

		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			;
		ptr[k] = malloc(i + 1);
		if (ptr[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			ptr[k][i] = str[i];
		ptr[k][i] = '\0';
		k++;
		str += i;
	}
	ptr[k] = NULL;
	return (ptr);
}
