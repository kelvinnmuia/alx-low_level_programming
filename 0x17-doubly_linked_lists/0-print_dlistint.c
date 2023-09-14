#include "lists.h"

/**
 * print_dlistint - Prints elements in the doubly linked list
 * @h: The head of the doubly linked list
 *
 * Return: The number the elements of the dlinked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nds);
}
