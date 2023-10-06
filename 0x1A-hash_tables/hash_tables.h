#ifndef HASH_TABLES
#define HASH_TABLES

/* INCLUDED LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* STRUCTS AND DEFINITIONS */

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: string for key
 * The key is unique in the hash table
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of a list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: the size of the array
 * @array: an array of size given by @size
 * Each cell of this array is a pointer to the first node of a linked list
 * because we want our hash table to use a chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* FUNCTION PROTOTYPES */

/* declaration of function that creates a hash table (0)*/
hash_table_t *hash_table_create(unsigned long int size);

