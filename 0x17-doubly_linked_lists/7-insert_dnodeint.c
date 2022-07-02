#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at given index
 *
 * @h: head node
 * @idx: index
 * @n: node value
 *
 * Return: newly inserted node or NULL if insertion failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iter = *h;
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*h == NULL && idx == 0)
	{
		*h = malloc(sizeof(dlistint_t));
		if (*h == NULL)
			return (NULL);
		(*h)->n = n;
		(*h)->prev = NULL;
		(*h)->next = NULL;
		return (*h);
	}

	while (iter != NULL && i <= idx)
	{
		if (i == idx)
		{
			tmp = malloc(sizeof(dlistint_t));
			if (tmp == NULL)
				return (NULL);
			tmp->n = n;
			tmp->next = iter;
			tmp->prev = iter->prev;
			iter->prev->next = tmp;
			iter->prev = tmp;
			return (tmp);
		}
		iter = iter->next;
		++i;
	}

	return (NULL);
}
