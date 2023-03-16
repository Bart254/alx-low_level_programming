#include "lists.h"
#include "stdio.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: head node
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
