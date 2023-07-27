#ifndef LIST_T
#define LIST_T
#include <stddef.h>
/**
 * struct list_t - singly linked list
 * @str: the string
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
} list_t;
/*function prototypes*/
size_t print_list(const list_t *h);
#endif
