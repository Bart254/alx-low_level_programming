#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
