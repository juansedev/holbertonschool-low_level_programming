#include "lists.h"
/**
 * dlistint_len - Function that count all the elements of a dlistint_t list
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
