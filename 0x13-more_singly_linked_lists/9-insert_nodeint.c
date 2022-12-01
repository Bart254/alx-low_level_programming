#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at given index
 * @head: pointer to head node
 * @idx: index
 * @n: value of new node
 *
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *ptr = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (position < idx)
	{
		if (position == idx - 1)
		{
			if (!ptr)
				return (NULL);
			new->next = ptr->next;
			ptr->next = new;
		}
		ptr = ptr->next;
		position++;
	}
	return (ptr);
}
