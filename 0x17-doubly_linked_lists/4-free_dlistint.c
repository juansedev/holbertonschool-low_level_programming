#include "lists.h"
/**
 * free_dlistint - Function that count all the elements of a dlistint_t list
 * @head: double  Pointer with the addres of head of a list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free, *tmp;

	if (head == NULL)
		return;

	to_free = head;

	while (to_free)
	{
		tmp = to_free->next;
		free(to_free);
		to_free = tmp;
	}
}
