#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * @head: Is a first structure of a linked list
 * @n: number to set field n in the new node.
 *
 * Return: pointer to a new add note
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->next = *head;
	*head = new;
	return (new);
}
