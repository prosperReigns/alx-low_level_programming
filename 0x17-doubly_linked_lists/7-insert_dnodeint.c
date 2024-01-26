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
	dlistint_t *tmp, *newNode = NULL;

	tmp = *h;
	count = countNode(tmp);

	if (n > count)
		return (NULL);

	newNode = createNode(n);
	tmp = *h;

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

	if (tmp->prev != NULL)
		tmp->prev->next = newNode;
	newNode->prev = tmp->prev;
	newNode->next = tmp;
	tmp->prev = newNode;

	if (idx == 1)
		*h = newNode;

	return (*h);
}

/**
 *createNode- ctrates a node
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

/**
 *countNode - gets the number of node in a list 
 *@tmp: a pointer to a list
 *
 *Return: number of item in a list
 */

int countNode(dlistint_t *tmp)
{
	int count = 0;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	return (count);
}
