#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees the memory
 * @head: the pointer of the head node
 * Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
