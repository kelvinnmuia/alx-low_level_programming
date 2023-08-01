#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that frees the memory
 * @head: the pointer of the head node
 * Return: returns 1 or 0
 */
int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	if (*head == NULL)
		return (0);

	return (data);
}
