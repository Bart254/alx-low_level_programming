#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all elements of a list called listint
 * @h: header pointer
 *
 * The program prints all elements found in a node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

