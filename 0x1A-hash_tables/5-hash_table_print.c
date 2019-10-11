#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Retrieves a value associated with a key.
 * @ht: hash table to look into
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *item;
	int counter = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			item = ht->array[index];
			while (item)
			{
				printf("'%s': '%s'", item->key, item->value);
				counter++;
				item = item->next;
				if (item != NULL)
					printf(", ");
			}
		}
		if ((counter != 0) & (ht->array[index + 1] != NULL))
			printf(", ");
	}
	printf("}\n");
}
