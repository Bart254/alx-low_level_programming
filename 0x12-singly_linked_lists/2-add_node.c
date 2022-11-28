#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a note element
 * @head: pointer to head pointer
 * @str: string to be assigned
 *
 * Return: node element pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = malloc(sizeof(str));
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}

