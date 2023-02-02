#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr)
	{
		*head = ptr->next;
		free(ptr);
		ptr = *head;
	}
}
