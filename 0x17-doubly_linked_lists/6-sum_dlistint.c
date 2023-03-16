#include "lists.h"

/**
 * sum_dlistint - sums all elements of a list
 * @head: head node
 * Return: sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
