#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specified index
 * @head: head
 * @index: index specified
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr)
	{
		if (check == index)
			return (ptr);
		check++;
		ptr = ptr->next;
	}
	return (ptr);
}

