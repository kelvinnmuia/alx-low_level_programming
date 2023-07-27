#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - function to print elements of a linked list
 * @h: the pointer of the head node
 * Return: returns a list of linkedlist elements
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
