#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at specified index
 * @head: pointer to head
 * @idx: index to be inserted
 * @n: node element
 *
 * Return: pointer of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int tail_idx = 0;
	listint_t *tail, *new, *ptr;

	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	tail = *head;
	while (tail->next)
	{
		tail = tail->next;
		tail_idx++;
	}
	if (idx - tail_idx == 1)
		return (add_nodeint_end(head, n));
	else if (idx - tail_idx > 1)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *head;
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}

