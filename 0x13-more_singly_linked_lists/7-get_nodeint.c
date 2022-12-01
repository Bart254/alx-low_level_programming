#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at index
 * @head: head node
 * @index: position of the node
 *
 * Return: address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *ptr = head;

	while (node < index)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		node++;
	}
	return (ptr);
}
