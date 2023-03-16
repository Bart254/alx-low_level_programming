#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a specified index
 * @h: head pointer
 * @idx: index to insert the node
 * @n: element to insert
 * Return: Address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int check = 0;
	dlistint_t *temp, *new;

	if (h)
	{
		temp = *h;
		while (check <= idx)
		{
			if (temp == NULL)
			{
				if (idx == 0 || check == idx)
					return (add_dnodeint_end(h, n));
				return (NULL);
			}
			if (check == idx)
			{
				if (idx == 0)
					return (add_dnodeint(h, n));
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->prev = temp->prev;
				new->n = n;
				new->next = temp;
				temp->prev = new;
				temp = new->prev;
				temp->next = new;
				return (new);
			}
			check++;
			temp = temp->next;
		}
	}
	return (NULL);
}

