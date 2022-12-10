#include "function_pointers.h"

/**
 * print_name - prints the name passed to it
 * @name: name passed
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *n))
{
	if (name != NULL)
		f(name);
}

