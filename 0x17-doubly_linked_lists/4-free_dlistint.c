#include "lists.h"

/**
 *free_dlistint - frees a doubly linked list
 *@head: a pointer to a list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}

	free(tmp);
	tmp = NULL;
	head = NULL;
}
