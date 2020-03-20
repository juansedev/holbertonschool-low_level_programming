#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_list(head->next);
	free(head->next);
	free(head->str);
	free(head);
}