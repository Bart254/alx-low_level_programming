#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - recovers a node at a specified index
 * @head: head node
 * @index: index of node to be acquired
 * Return: address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int check;

	for (check = 0; check <= index && head; head = head->next, check++)
	{
		if (check == index)
			return (head);
	}
	return (NULL);
}
