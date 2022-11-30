#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes head node
 * @head: pointer to head
 *
 * Return: node data of head
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n = (*head)->n;

	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
