#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print -function that prints a hash table.
 * @ht: hash table.
 * Return:void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int index;
	unsigned int i = 0;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (i == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				i = 1;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
