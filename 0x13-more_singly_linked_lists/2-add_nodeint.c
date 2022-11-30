#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beginning
 * @head: pointer of head
 * @n: value for data element of node
 *
 * The program adds a node at the beginning of a list
 * This is contrary to the convention where a node
 * is added at the end
 *
 * Return: pointer of the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

