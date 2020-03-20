#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	int nodes = 1;

	if (h == NULL)
	{
		return (0);
	}
	nodes += list_len((h->next));

	return (nodes);
}
