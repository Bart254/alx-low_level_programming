#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specified index
 * @head: pointer to head
 * @index: index to delete the node
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int check = 0;
	dlistint_t *temp, *ptr;

	if (head)
	{
		temp = *head;
		while (temp)
		{
			if (check == index)
			{
				if (check == 0)
				{
					*head = temp->next;
					if (temp)
						free(temp);
					return (1);
				}
				ptr = temp->prev;
				ptr->next = temp->next;
				if (temp->next)
				{
					temp = temp->next;
					free(temp->prev);
					temp->prev = ptr;
				}
				return (1);
			}
			temp = temp->next;
			check++;
		}
		return (-1);
	}
	return (-1);
}
