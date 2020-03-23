#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Is a first structure of a linked list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	nodes += print_listint(h->next);
	return (nodes);
}
