#include "lists.h"

/**
 * add_dnodeint - adds nodes at the beginning of a list
 * @head: pointer to pointer of head
 * @n: the element
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	if (head)
	{
		new->prev = NULL;
		new->next = *head;
		new->n = n;
		if (*head == NULL)
			*head = new;
		else
		{
			(*head)->prev = new;
			*head = new;
		}
		return (new);
	}
	free(new);
	return (NULL);
}

