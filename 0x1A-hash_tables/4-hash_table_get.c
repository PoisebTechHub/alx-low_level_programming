#include "hash_tables.h"

/**
 * hash_table_get - Retrieving the value associated with
 *                  a key in hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to get the value of.
 *
 * Return: The key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *net;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	net = ht->array[index];
	while (net && strcmp(net->key, key) != 0)
		net = net->next;

	return ((net == NULL) ? NULL : net->value);
}
