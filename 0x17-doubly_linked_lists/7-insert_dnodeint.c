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
	unsigned int i = 0;
	dlistint_t *tmp, *tmp2, *newNode = NULL;

	tmp = *h;
	while (i < idx)
	{
		i++;

		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	newNode = createNode(n);

	if (tmp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (tmp->prev == NULL)
	{
		newNode->next = tmp;
		tmp->prev = newNode;
		*h = newNode;
		return (*h);
	}

	tmp2 = tmp->prev;
	newNode->prev = tmp2;
	newNode->next = tmp;
	tmp->prev = newNode;
	tmp2->next = newNode;

	return (*h);
}

/**
 *createNode- ctrates a node
 *@n: value you want to store
 *
 *Return: a pointer to a node
 */

dlistint_t *createNode(int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	return (newNode);
}
