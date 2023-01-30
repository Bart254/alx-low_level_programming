#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: head
 *
 * Description: prints element in a list in the form
 * [number of characters] words, ie [5] Hello
 * Return: number of elements in a list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t n;

	ptr = h;
	n = 0;
	if (ptr == NULL)
		return (n);
	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", _strlen(ptr->str), ptr->str);
		ptr = ptr->next;
		n++;
	}
	return (n);
}

/**
 * _strlen - determines length of a string
 * @str: sting
 * Return: length of the string
 */
size_t _strlen(const char *str)
{
	size_t l = 0;
	int e = 0;

	while (str[e])
	{
		l++;
		e++;
	}
	return (l);
}

