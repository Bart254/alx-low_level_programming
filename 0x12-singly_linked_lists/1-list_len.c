#include "lists.h"

/**
 * list_len - determines number of nodes in a list
 * @h: header of node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

