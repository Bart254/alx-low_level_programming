#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to head
 * @n: element to be added to node
 * Return: address of the new node or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
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

