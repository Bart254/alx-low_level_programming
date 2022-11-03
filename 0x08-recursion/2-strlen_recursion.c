/**
 * _strlen_recursion - returns length of string
 * @s: The parameter
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
