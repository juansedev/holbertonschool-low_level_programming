#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that count all the elements
 * of a dlistint_t list
 * @head: double  Pointer with the addres of head of a list
 * @index: value of the index
 *
 * Return: The addres of the new node of the list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy = *head;
	unsigned int ind_node = 0;

	if (!head || !(*head))
		return (-1);

	if (index == 0 && copy->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0 && copy->next != NULL)
	{
		*head = copy->next;
		(*head)->prev = NULL;
		free(copy);
		return (1);
	}
	while (copy)
	{
		if (ind_node == index && copy->next != NULL)
		{
			(copy->prev)->next = (copy->next);
			(copy->next)->prev = (copy->prev);
			free(copy);
			return (1);
		}
		if (ind_node == index && copy->next == NULL)
		{
			(copy->prev)->next = NULL;
			free(copy);
			return (1);
		}
		copy = copy->next;
		ind_node++;
	}
	return (-1);
}
