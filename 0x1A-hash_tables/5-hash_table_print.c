#include "hash_tables.h"

/**
 * hash_table_print - Printing a hash table.
 * @ht: The pointer to the hash table to print.
 *
 * Description: A Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *net;
	unsigned long int k;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			net = ht->array[k];
			while (net != NULL)
			{
				printf("'%s': '%s'", net->key, net->value);
				net = net->next;
				if (net != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
