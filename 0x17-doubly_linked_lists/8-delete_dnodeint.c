#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at a given index
 *
 * @head: head node
 * @index: index of node to delete
 *
 * Return: 1 if deletion succeeded, -1 if deletion failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter = (*head);
	unsigned int i = 0;

	while (iter != NULL && i <= index)
	{
		if (i == index)
		{
			if (iter->prev != NULL)
			{
				iter->prev->next = iter->next;
			}
			if (iter->next != NULL)
			{
				iter->next->prev = iter->prev;
			}
			if (iter == (*head))
				(*head) = iter->next;
			iter->next = NULL;
			iter->prev = NULL;
			free(iter);
			return (1);
		}
		iter = iter->next;
		++i;
	}

	return (-1);
}
