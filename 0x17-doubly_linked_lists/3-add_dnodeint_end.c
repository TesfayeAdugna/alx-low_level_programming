#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 *
 * @head: head node
 * @n: value of node to add to list
 *
 * Return: address of newly created node or NULL if creation failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *iter = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}

	while (iter->next != NULL)
	{
		iter = iter->next;
	}

	iter->next = malloc(sizeof(dlistint_t));
	if (iter->next == NULL)
		return (NULL);
	iter->next->n = n;
	iter->next->prev = iter;
	iter->next->next = NULL;
	return (iter->next);
}
