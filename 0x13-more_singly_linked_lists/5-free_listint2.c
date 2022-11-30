#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}

