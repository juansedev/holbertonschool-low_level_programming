#include "lists.h"
/**
 * add_nodeint - function that prints all the elements of a listint_t list.
 * @h: Is a first structure of a linked list
 *
 * Return: The number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;

    if (*head == NULL)
    {
        new->next = NULL;
        *head = new;
        return (new);
    } 

    new->next = *head;
    *head = new;
    return (new);
}