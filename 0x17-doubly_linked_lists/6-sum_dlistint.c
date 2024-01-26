#include "lists.h"

/**
 *sum_dlistint - sums up the value in a node
 *@head: a pointer to a doubly linked list
 *
 *Return: an integer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (sum);
	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
