#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds node at the end of a list
 * @h: pointer to head
 * @n: element of a new node
 * Return: Address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_n *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		new->prev = NULL;
		*h = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		new->prev = ptr;
		ptr->next = new;
	}
	return (new)
}

