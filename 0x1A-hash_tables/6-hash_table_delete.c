#include "hash_tables.h"

/**
 * hash_table_delete - function for freeing and deleting hash table
 * @ht: hash table to delete
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *mover;
	unsigned long int i = 0, check = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		mover = ht->array[i];
		while (mover != NULL)
		{
			if (check)
				printf(", ");
			printf("\'%s\': ", mover->key);
			printf("\'%s\'", mover->value);
			check = 1;
			mover = mover->next;
		}
	}
	printf("}\n");
}
