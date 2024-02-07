#include "hash_tables.h"

//Write a function that creates a hash table.
//Prototype: hash_table_t *hash_table_create(unsigned long int size);
//where size is the size of the array
//Returns a pointer to the newly created hash table
//If something went wrong, your function should return NULL
//Below is the solution

/**
 * hash_table_create - Creating a given hash table.
 * @size: Size of the array.
 *
 * Return: When error occurs - NULL.
 *         Otherwise - Pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
