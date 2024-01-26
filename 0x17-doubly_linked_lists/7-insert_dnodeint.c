#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a node at a specific position
 *@h: a pointer to a pointer to
 *a doubly linked list
 *@idx: position where we you want to insert a node 
 *@n: the data which will be stored
 *
 *Return: a pointer to a node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int count = 0;
	dlistint_t *tmp;
	dlistint_t *newNode = NULL;

	tmp = *h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	if (n > count)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	tmp = *h;

	if (idx == 0)
	{
		newNode->next = tmp;
		tmp->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	while (idx > 1)
	{
		if (tmp == NULL)
		{
			free(newNode);
			return (NULL);
		}	

		tmp = tmp->next;
		idx--;
	}

	newNode->next = tmp->next;

	if (tmp->next != NULL)
	{
		tmp->next->prev = newNode;
	}

	tmp->next = newNode;
	newNode->prev = tmp;

	return (newNode);
}
