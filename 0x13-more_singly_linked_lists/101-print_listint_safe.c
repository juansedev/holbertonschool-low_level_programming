#include "lists.h"

/**
 * print_listint_safe - prints a list without going through an infinite loop
 * @head: beginning of linked list
 *
 * Return: size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 1;

	if (head == NULL)
		return (0);
	/* act = head->next;
	printf("[%p] %d\n", (void *)&act, head->n);
	nodes += print_listint_safe(head->next);*/
	return (nodes);
}