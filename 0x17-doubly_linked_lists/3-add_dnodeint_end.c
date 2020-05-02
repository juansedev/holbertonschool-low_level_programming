#include "lists.h"
/**
 * add_dnodeint_end - Function that count all the elements of a dlistint_t list
 * @head: double  Pointer with the addres of head of a list
 * @n: value of the n
 *
 * Return: The addres of the new node of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *copy = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = new_node;
	new_node->prev = copy;
	new_node->next = NULL;

	return (new_node);
}
