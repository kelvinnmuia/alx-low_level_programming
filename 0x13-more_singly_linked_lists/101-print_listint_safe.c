#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - function that reverses a linked list
 * @head: the pointer of the head node
 * Return: returns reversed linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *current = head;
	const listint_t *runner = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;

		current = current->next;

		if (runner && runner->next)
			runner = runner->next->next;

		if (current >= head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (counter);
}
