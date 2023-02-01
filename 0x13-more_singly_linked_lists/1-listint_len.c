#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: head
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

