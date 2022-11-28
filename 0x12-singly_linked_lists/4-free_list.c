#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory of lists
 * @head: head pointer
 *
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
