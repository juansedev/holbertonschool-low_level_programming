#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that count all the elements
 * of a dlistint_t list
 * @h: double  Pointer with the addres of head of a list
 * @idx: value of the index
 * @n: value of de variable n of the node
 *
 * Return: The addres of the new node of the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy = *h, *insert;
	unsigned int ind_node = 0;

	if (!h || !(*h))
		return (NULL);

	insert = malloc(sizeof(dlistint_t));
	if (insert == NULL)
		return (NULL);

	insert->n = n;

	while (copy)
	{
		if (ind_node == idx && copy->next != NULL)
		{
			(copy->prev)->next = insert;
			insert->prev = copy->prev;
			(copy->next)->prev = insert;
			insert->next = copy;
			return (insert);
		}
		if (ind_node == idx && copy->next == NULL)
		{
			(copy->prev)->next = insert;
			insert->prev = copy->prev;
			(copy->next)->prev = insert;
			insert->next = copy;
			return (insert);
		}
		copy = copy->next;
		ind_node++;
	}
	return (NULL);
}
