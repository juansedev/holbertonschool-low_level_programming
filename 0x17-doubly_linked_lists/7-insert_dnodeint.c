#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that count all the elements
 * of a dlistint_t list
 * @h: double  Pointer with the addres of head of a list
 * @idx: value of the index
 * @n: value of de variable n of the node
 *
 * Return: The addres of the new node of the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert = NULL, *copy = *h;
	unsigned int ind_node = 0, len = 0;

	len = dlistint_len(*h);

	if (idx <= len)
	{
		if (idx == 0)
			insert = add_dnodeint(h, n);
		else if (idx == len)
			insert = add_dnodeint_end(h, n);
		else
		{
			insert = malloc(sizeof(dlistint_t));
			if (!insert)
				return (NULL);
			insert->n = n;
			while (copy)
			{
				if (idx - 1 == ind_node)
				{
					insert->next = copy->next;
					(copy->next)->prev = insert;
					copy->next = insert;
					insert->prev = copy;
					return (insert);
				}
				ind_node++;
				copy = copy->next;
			}
		}
		return (insert);
	}
	return (NULL);
}
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
