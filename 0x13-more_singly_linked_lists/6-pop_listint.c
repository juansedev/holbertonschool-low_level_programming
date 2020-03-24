#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
int pop_listint(listint_t **head)
{
	int n_field = 0;

	if (head == NULL)
	{
		return (0);
	}

	if ((*head)->next == NULL)
	{
		n_field = (*head)->n;
		*head = NULL;
	} else
	{
		n_field = (*head)->n;
		*head = (*head)->next;
	}

	return (n_field);
}
