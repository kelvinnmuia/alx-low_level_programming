#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts new_node at a given position
 * @head: the pointer of the head node
 * @idx: index to insert the node
 * @n: the node's value
 * Return: returns 1 or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (counter == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);

		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
