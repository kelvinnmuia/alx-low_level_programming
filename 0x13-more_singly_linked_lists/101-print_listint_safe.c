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
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %d\n", (void *)slow, slow->n);
		counter++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
	}
	return (counter);
}
