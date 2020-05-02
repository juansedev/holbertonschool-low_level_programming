#include "lists.h"
/**
 * get_dnodeint_at_index - Function that count all the elements
 * of a dlistint_t list
 * @head: double  Pointer with the addres of head of a list
 * @index: value of the index
 *
 * Return: The addres of the new node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy = head;
	unsigned int ind_node = 0;

	if (head != NULL)
	{
		while (head)
		{
			head = head->next;
			ind_node++;
		}
	} else
		return (NULL);
	if (index < ind_node)
	{
		ind_node = 0;
		while (ind_node != index)
		{
			copy = copy->next;
			ind_node++;
		}
		return (copy);
	} else
		return (NULL);
}
