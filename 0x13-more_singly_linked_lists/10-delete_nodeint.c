#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes nodes at given index
 * @head: the pointer of the head node
 * @index: index to delete the nodes
 * Return: returns 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	while (temp != NULL)
	{
		if (counter == index)
		{
			if (prev == NULL)
			{
				*head = temp->next;
				free(temp);
			}
			else
			{
				prev->next = temp->next;
				free(temp);
			}
			return (1);
		}
		prev = temp;
		temp = temp->next;
		counter++;
	}
	return (-1);
}
