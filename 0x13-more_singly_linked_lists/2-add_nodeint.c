#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a node at the begining of linked list
 * @head: pointer that points to the pointer of the head node
 * @n: the integer value to be held by the node
 * Return: returns a new node in the begining of linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
