#include "lists.h"
/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head: pointer to Pointed to head of a list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = *head, *act;

	if (head == NULL || *head == NULL)
		return (NULL);

	act = (*head)->next;
	*head = (*head)->next;
	reverse->next = NULL;
	while (*head)
	{
		*head = (*head)->next;
		act->next = reverse;
		reverse = act;
		act = (*head);
	}
	*head = reverse;
	return (reverse);
}
