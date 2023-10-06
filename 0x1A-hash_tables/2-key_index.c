#include "hash_tables.h"

/**
 * key_index - function for finding index of the given key
 *
 * @key: the string used as key for finding the desired value in hash table
 * @size: the array size of the hash table
 *
 * Return: index of the hash table where the key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
