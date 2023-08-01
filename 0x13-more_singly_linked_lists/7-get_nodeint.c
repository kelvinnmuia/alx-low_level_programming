#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the pointer of the head node
 * @index: the index of the node
 * Return: returns 1 or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (counter == index)
			return (current);

		current = current->next;
		counter++;
	}
	return (NULL);
}
