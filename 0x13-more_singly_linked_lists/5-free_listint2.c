#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	if ((*head) == NULL)
	{
		return;
	}
	free_listint2(&((*head))->next);
	free(*head);
	*head = NULL;
}
