#include "hash_tables.h"
/**
 * hash_table_create - In this function create a hash table
 * with Chaining collision handling
 * @size: lenght of the hasta table
 *
 * Return: A new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	hash_node_t *new_node = NULL;

	new_hash = malloc(sizeof(hash_table_t) * size);
	if (!new_hash)
		return (NULL);
	new_hash->size = size;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_hash);
		return (NULL);
	}

	new_node->key = NULL;
	new_node->value = NULL;
	new_node->next = NULL;
	new_hash->array = &new_node;

	return (new_hash);
}
