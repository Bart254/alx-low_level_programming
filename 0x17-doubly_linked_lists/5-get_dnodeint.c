#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at specified index
 * @head: head node
 * @index: index from where node is acquired
 * Return: node if found, otherwise returns NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; head; n++, head = head->next)
	{
		if (n == index)
			return (head);
	}
	return (NULL);
}
