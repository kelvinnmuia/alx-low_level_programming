#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table
 * @size: the array size
 *
 * Return: NULL or a pointer to the new created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->arr = malloc(sizeof(hash_node_t *) * size);
	if (ht->arr == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->arr[i] = NULL;
	}
	return (ht);
}
