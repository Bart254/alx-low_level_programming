#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds node at the end of a list
 * @head: pointer to head
 * @n: element to filled
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *ptr;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	tail->n = n;
	tail->next = NULL;
	if (*head == NULL)
		*head = tail;
	ptr = *head;
	while (ptr != tail)
	{
		if (ptr->next == NULL)
			ptr->next = tail;
		ptr = ptr->next;
	}
	return (tail);
}

