#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all nodes of a doubly linked list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%ld\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

