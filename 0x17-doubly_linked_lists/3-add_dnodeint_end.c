#include "lists.h"

/**
 *add_dnodeint_end - a function add a new node
 *to the end of a doubly linked list
 *@head: pointer to a pointer to a linear data structure (doubly linked list)
 *@n: data we want to store
 *
 *Return: pointer to a new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	tmp = *head;
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = newNode;
	newNode->prev = tmp;

	return (tmp);
}
