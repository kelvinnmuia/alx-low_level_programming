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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void print_lines(void);
#endif
