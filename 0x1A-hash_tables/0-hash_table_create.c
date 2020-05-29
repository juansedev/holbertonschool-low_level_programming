#include "hash_tables.h"

/**
 * hash_table_create - In this function create a hash table
 * with Chaining collision handling
 * @size: lenght of the hasta table
 *
 * Reurn: A new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *new_hash = NULL;
        hash_node_t *new_node = NULL, *head_node = NULL;

        new_hash = malloc(sizeof(hash_table_t) * size);
        if (!new_hash)
                return (NULL);
        new_hash->size = size;

        head_node = malloc(sizeof(hash_node_t));
        if (!head_node)
                return (NULL);
        head_node->key = NULL;
        head_node->value = NULL;
        head_node->next = NULL;

        while (size)
        {
                new_node = malloc(sizeof(hash_node_t));
                if (!new_node)
                {
                        free(new_hash);
                        return (NULL);
                }
                new_node->key = NULL;
                new_node->value = NULL;
                new_node->next = head_node;
                head_node = new_node;
                size--;
        }

        return (new_hash);

}