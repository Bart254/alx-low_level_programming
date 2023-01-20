#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a list
 * @h:head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

