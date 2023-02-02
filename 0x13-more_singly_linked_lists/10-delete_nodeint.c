#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a nide at specified index
 * @head: pointer to head
 * @index: index to be deleted
 * Return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;
	unsigned int check = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	prev = ptr;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr)
	{
		if (check == index)
		{
			prev->next = ptr->next;
			free(ptr);
			return (1);
		}
		prev = ptr;
		ptr = ptr->next;
		check++;
	}
	return (-1);
}
