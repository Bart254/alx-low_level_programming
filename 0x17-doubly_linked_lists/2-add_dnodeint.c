#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds node at the beginning of list
 * @h: pointer to head pointer
 * @n: element to be inserted in new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *h;
	new->n = n;
	*h = new;
	return (new);
}

