#include "lists.h"

/**
 * sum_dlistint - adds all elements of a node
 * @head: head
 * Return: sum of all elements of the node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

