#include "lists.h"

/**
 * print_dlistint - prints a double linked list's items
 *
 * @h: head node of list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;
	const dlistint_t *tmp = h;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		++node_count;
		tmp = tmp->next;
	}

	return (node_count);
}
