#ifndef LISTINT_S
#define LISTINT_S
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to the next node in the linked list
 * Description: singly linked list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/*function prototypes*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif
