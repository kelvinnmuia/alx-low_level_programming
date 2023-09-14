#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in a dlistint_t list.
 * @head: pointer to the dlistint_t list.
 * @index: The node to find
 *
 * Return: returns address of node found or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
