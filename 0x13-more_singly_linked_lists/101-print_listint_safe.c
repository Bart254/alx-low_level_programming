#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a list safely
 * @head: head node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int n = 0;

	while (head)
	{
		if (printf("[%p] %d\n", (void *)head, head->n) < 0)
			exit(98);
		n++;
		head = head->next;
	}
	return (n);
}

