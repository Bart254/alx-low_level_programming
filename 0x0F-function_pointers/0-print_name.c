/**
 * print_name - prints the name passed to it
 * @name: name passed
 * @@f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
