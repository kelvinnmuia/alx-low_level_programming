#include "lists.h"

/**
 * sum_dlistint - function that computes sum of dlistint_t list data
 * @head: The head of the dlistint_t list.
 *
 * Return: returns the sum of all the dlistint_t data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
