#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_t *insert - inserts a node at index
 * @h: pointer to head
 * @idx: index to insert the node
 * @n: element of a node
 * Return: addess of the new node
 */
dlistint_t *insert(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int check = 0;
	dlistint_t *ptr = *h, *new;

	if (*h == NULL)
		return (NULL);
	while (ptr)
	{
		if (idx == 0)
		{
			new = add_dnodeint(h, n);
			return (new);
		}
		if (check == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev = new;
			return (new);
		}
		ptr = ptr->next;
		check++;
	}
	return (NULL);
}

