#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: Is a first structure of a linked list
 *
 * Return: The sum of n field of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	sum = head->n + sum_listint(head->next);

	return (sum);
}
