#include "lists.h"

/**
 * dlistint_len - function that determines length of dlistint_t list.
 * @h: pointer to the head of dlistint_t list.
 *
 * Return: returns the length of dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
