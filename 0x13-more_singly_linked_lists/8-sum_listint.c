#include "lists.h"

int sum_listint(listint_t *head)
{
    int sum = 0;

    if (head == NULL)
        return (sum);

    sum = head->n + sum_listint(head->next);

    return (sum);
}