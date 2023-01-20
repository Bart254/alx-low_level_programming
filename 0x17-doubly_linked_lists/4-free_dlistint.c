#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @h: pointer to head
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *ptr;

	while (h)
	{
		ptr = h;
		h = h->next;
		free(ptr);
	}
}

