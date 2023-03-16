#include "lists.h"

/**
 * dlistitn_len - returns the size of nodes
 * @h: pointer to head
 * Return: number of nodes in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
