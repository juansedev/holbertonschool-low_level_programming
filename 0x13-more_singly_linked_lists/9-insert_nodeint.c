#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position
 * @head: pointer to Pointed to head of a list
 * @idx:  index of the node to insert
 * @n: Value to set on field n of new node
 *
 * Return: Pointer to a node select
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes = 0;
	listint_t *act_node, *next_node, *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	act_node = *head;
	while (act_node)
	{
		if (nodes == idx - 1)
		{
			next_node = act_node->next;
			act_node->next = new_node;
			new_node->next = next_node;
			return (new_node);
		}
		act_node = act_node->next;
		nodes++;
	}
	return (NULL);
}
