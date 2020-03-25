#include "lists.h"
/**
 * print_listint - function that prints a listint_t linked list.
 * @h: Is a first structure of a linked list
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 1;

	if (head == NULL)
		exit(98);

	printf("[%p] %d\n", (void *)&head, head->n);
	nodes += print_listint_safe(head->next);
	return (nodes);
}
