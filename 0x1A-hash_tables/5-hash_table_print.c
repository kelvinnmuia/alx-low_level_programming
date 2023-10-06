#include "hash_tables.h"

/**
 * hash_table_print - function for printing all key/value pairs in order
 * @ht: hash table to print
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *mover;
	unsigned long int i = 0, chck = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		mover = ht->array[i];
		while (mover != NULL)
		{
			if (chck)
				printf(", ");
			printf("\'%s\': ", mover->key);
			printf("\'%s\'", mover->value);
			chck = 1;
			mover = mover->next;
		}
	}
	printf("}\n");
}
