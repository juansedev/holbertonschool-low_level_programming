#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list
 * @head: Is a first structure of a linked list
 * @n: number to set field n in the new node.
 *
 * Return: pointer to a new add note
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if  (*head == NULL)
	{
		*head = new;
	} else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}
	return (new);
}
