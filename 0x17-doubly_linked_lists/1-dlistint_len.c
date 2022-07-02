#include "lists.h"

/**
 * dlistint_len - finds the length of a linked list
 *
 * @h: head node
 *
 * Return: length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *iter = h;

	if (h == NULL)
		return (0);

	while (iter != NULL)
	{
		++len;
		iter = iter->next;
	}

	return (len);
}
