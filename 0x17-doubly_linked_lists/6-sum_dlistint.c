#include "lists.h"

/**
 * sum_dlistint - obtains the sum of all elements in a linked list
 *
 * @head: head node
 *
 * Return: sum of all nodes in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *iter = head;

	if (head == NULL)
		return (0);

	while (iter != NULL)
	{
		sum += iter->n;
		iter = iter->next;
	}

	return (sum);
}
