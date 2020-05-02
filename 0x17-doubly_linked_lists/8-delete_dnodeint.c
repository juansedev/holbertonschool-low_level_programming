#include "lists.h"
/**
 * get_dnodeint_at_index - Function that count all the elements
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
                
	if (index == 0)
	{
		free(*head);
		*head = copy->next;
		return (1);
	}
	while (copy)
	{	
		if (ind_node == index)
		{
			(copy->prev)->next = (copy->next);
			(copy->next)->prev = (copy->prev);
			free(copy);
			return (1);
		}
		copy = copy->next;
		ind_node++;

		/*
		ind_node = 0;
		while (ind_node != index)
		{
			copy = copy->next;
			ind_node++;
		}
                if (index != ind_node - 1)
                        (copy->prev)->next = (copy->next);
                else
                        (copy->prev)->next = NULL;
                if (index != 0)
                        (copy->next)->prev = (copy->prev);
                else
                        (copy->next)->prev = NULL;
                free(copy);
                return (1);
		*/
	} 
	return (-1);
}