#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 *
 * @head: head node
 * @index: zero based index of node to find
 *
 * Return: node at index or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		++i;
	}

	return (NULL);
}
