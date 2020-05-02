#include "lists.h"
/**
 * sum_dlistint - Function that prints all the elements of a dlistint_t list
 * @head: Pointed to head of a list
 *
 * Return: The number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *tmp = head;
	int sum = 0;

	if (tmp == NULL)
	{
		return (0);
	}

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
