#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the indexed node
 * @head: pointer to head
 * @index: index to be deleted
 *
 * Return: 1 (successful) -1(Unsuccessful)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1 = *head, *ptr2;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr1->next;
		free(ptr1);
		return (1);
	}
	/* traverse the list */
	else
	{
		while (i < index)
		{
			if (ptr1 == NULL || ptr1->next == NULL)
				return (-1);
			ptr1 = ptr1->next;
			i++;
		}
		ptr2 = ptr1->next;
		ptr1->next = ptr2->next;
		free(ptr2);
	}
	return (1);
}

