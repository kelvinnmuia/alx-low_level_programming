#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds loop in linked list
 * @head: the pointer of the head node
 * Return: returns node where loops start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl, *fst;

	if (head == NULL || head->next == NULL)
		return (NULL);
	sl = head->next;
	fst = head->next->next;

	while (fst && fst->next)
	{
		if (sl == fst)
		{
			sl = head;

			while (sl != fst)
			{
				sl = sl->next;
				fst = fst->next;
			}
			return (fst);
		}
		sl = sl->next;
		fst = fst->next->next;
	}
	return (NULL);

}
