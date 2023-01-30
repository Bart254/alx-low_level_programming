#include "lists.h"

/**
 * list_len - returns length of list
 * @h: head
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t n = 0;

	if (ptr)
	{
		while (ptr)
		{
			n++;
			ptr = ptr->next;
		}
	}
	return (n);
}

