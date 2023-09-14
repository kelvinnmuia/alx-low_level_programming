#include "lists.h"

/**
 * add_dnodeint - function to add new node to the beggining of dlistint
 * @head: double pointer to the dlistint_t list head
 * @n: new node integer value
 *
 * Return: returns address to the new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
