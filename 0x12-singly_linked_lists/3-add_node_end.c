#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node at the end of a list
 * @head: pointer to head
 * @str: string to be added to the node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
	}
	else
	{
		new->str = NULL;
		new->len = 0;
	}
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}

