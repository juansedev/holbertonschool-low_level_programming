#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
 
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
