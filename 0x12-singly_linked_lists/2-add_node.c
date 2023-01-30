#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a list
 * @h: pointer to head
 * @str: string to be include in our node
 * Return: address of new element
 */
list_t *add_node(list_t **h, const char *str)
{
	list_t *new;

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
	new->next = *h;
	*h = new;
	return (new);
}

