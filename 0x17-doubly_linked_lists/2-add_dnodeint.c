#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to the beginning of a distributed linked list
 *
 * @head: head node
 * @n: value of node to add
 *
 * Return: address of added node or NULL if addition failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
