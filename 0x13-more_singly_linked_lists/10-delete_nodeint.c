#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to Pointed to head of a list
 * @index:  index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;
	listint_t *act_node, *next_node;

	if (!head || !(*head))
		return (-1);


	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	act_node = *head;
	while (act_node)
	{
		if (nodes == index - 1)
		{
			next_node = act_node->next;
			act_node->next = next_node->next;
			free(next_node);
			return (1);
		}
		act_node = act_node->next;
		nodes++;
	}
	return (-1);
}
