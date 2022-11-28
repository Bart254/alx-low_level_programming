#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - Creates a node
 *@head: pointer to head
 *@str: string to be added
 *
 * Return: pointer to current node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *ptr;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	tail->str = strdup(str);
	tail->len = strlen(str);
	tail->next = NULL;
	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tail; 

	return (tail);
}
