#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to head
 * @index: index
 * Return: 1 if successful -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int check = 0;
	dlistint_t *ptr1, *ptr2, *ptr3;

	ptr2 = *head;
	while (ptr2)
	{
		if (check == index)
		{
			if (check == 0)
			{
				*head = ptr2->next;
				if (*head != NULL)
					(*head)->prev = NULL;
				free(ptr2);
				return (1);
			}
			ptr1 = ptr2->prev;
			ptr3 = ptr2->next;
			ptr1->next = ptr3;
			if (ptr3 != NULL)
				ptr3->prev = ptr1;
			free(ptr2);
			return (1);
		}
		check++;
		ptr2 = ptr2->next;
	}
	return (-1);
}
