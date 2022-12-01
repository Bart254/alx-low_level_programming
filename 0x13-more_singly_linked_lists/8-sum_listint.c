#include "lists.h"

/**
 * sum_listint - returns sum of the data in the nodes
 * @head: head node
 *
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (ptr == NULL)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

