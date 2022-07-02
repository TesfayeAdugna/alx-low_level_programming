#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *iter = head, *tmp;

	if (head == NULL)
		return;

	while (iter != NULL)
	{
		tmp = iter;
		iter = iter->next;
		free(tmp);
	}
}
