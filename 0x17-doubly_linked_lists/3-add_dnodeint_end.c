#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to head
 * @n: element to be added
 * Return: if successful, address of new element, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head)
		temp = *head;
	else
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (temp == NULL)
	{
		new->prev = temp;
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}
