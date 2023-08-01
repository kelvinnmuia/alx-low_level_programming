#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of data(n)
 * @head: the pointer of the head node
 * Return: returns 1 or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
