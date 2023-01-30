#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	if (!head)
		return;
	while (ptr)
	{
		head = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = head;
	}
}
