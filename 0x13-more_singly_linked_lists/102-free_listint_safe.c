#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - function that frees memory
 * @h: the pointer of the head node
 * Return: returns size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *temp;
	size_t counter = 0;

	while (current)
	{
		counter++;
		temp = current->next;
		free(current);
		current = temp;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (counter);
}
