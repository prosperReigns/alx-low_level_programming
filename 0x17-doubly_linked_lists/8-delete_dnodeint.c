#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp2, *tmp;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (index > 1)
	{
		tmp = tmp->next;
		index--;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	tmp2 = tmp->next->next;
	free(tmp->next);

	tmp->next = tmp2;
	if (tmp2 != NULL)
		tmp2->prev = tmp;

	return (1);


}
