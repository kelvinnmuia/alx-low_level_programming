#include "hash_tables.h"

/**
 * hash_table_delete - function for freeing and deleting hash table
 * @ht: hash table to delete
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *mover, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		mover = ht->array[i];
		while (mover != NULL)
		{
			temp = mover;
			mover = mover->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
