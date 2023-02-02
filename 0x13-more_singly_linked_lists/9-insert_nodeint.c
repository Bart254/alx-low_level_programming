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
		return (add_nodeint1(head, n));
	tail = *head;
	while (tail->next)
	{
		tail = tail->next;
		tail_idx++;
	}
	if (idx - tail_idx == 1)
		return (add_nodeint_end2(&tail, n));
	else if (idx > tail_idx)
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

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint1 - adds node at the beginning of a list
 * @head: pointer to head
 * @n: element to be added to new node
 * Return: address of new node
 */
listint_t *add_nodeint1(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end2 - adds a node at the end of a list
 * @head: pointer to head
 * @n: element to be added to node
 * Return: address of the new node or NULL if failed
 */
listint_t *add_nodeint_end2(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}

