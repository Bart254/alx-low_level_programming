#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head and returns its member
 * @head: pointer to head
 * Return: integer in head
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptr = *head;

	if (ptr)
	{
		*head = ptr->next;
		n = ptr->n;
		free(ptr);
	}
	return (n);
}

