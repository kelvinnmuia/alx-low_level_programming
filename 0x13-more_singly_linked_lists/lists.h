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
#endif
