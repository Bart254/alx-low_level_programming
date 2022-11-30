#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elements in a list
 * @h: address of head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}

