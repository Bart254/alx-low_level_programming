#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
}
