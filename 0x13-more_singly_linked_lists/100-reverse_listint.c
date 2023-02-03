#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to head
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *c;

	p = NULL;
	c = *head;
	if (!head || !*head)
		return (NULL);
	while (c)
	{
		*head = (*head)->next;
		c->next = p;
		p = c;
		c = *head;
	}
	*head = p;
	return (*head);
}
