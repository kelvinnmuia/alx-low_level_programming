#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees the memory
 * @head: the pointer of the head node
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;
	current = *head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
