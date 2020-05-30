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
	hash_table_t *new_hash;
	hash_node_t **new_node;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;

	new_node = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	if (new_node == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	memset(new_node, 0, size * sizeof(hash_node_t));
	new_hash->array = new_node;

	return (new_hash);
}
