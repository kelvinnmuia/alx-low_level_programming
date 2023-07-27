#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - function to print elements of a linked list
 * @h: the pointer of the head node
 * Return: returns a list of linkedlist elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
