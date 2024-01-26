#include "lists.h"

/**
 *get_dnodeint_at_index - get a node at a specific position
 *@head: a pointerv to a doubly linked list
 *@index: node at index (0)
 *
 *Return: a pointer to a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	while (index > 0)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
		index--;
	}

	return (tmp);
}
