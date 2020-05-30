#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int index_k = 0;

        if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (ht)
	{
		index_k = key_index((unsigned char *)key, ht->size);

		tmp = ht->array[index_k];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}

		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index_k];
		ht->array[index_k] = new_node;

		return (1);
	}
        return (0);
}