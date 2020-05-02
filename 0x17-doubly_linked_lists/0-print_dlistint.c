#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp)
	{
		printf("%d\n", tmp->n);
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
