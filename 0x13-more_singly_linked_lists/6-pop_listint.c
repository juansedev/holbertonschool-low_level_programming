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
	listint_t *new_head;

	if (*head == NULL)
		return (0);

	n_field = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;

	return (n_field);
}
