#include <string.h>
#include <stdlib.h>

/**
 *  argstostr - concatenates the strings passed to main
 *  @ac: number of arguments
 *  @av: arguments passed
 *  Return: the final string
 */
char *argstostr(int ac, char **av)
{
	int args_e, e = 0, args, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* calculating the size of memory we need */
	for (args = 0; args < ac; args++)
	{
		size += (strlen(av[args]) + 1);
	}
	size++;
	/* assign memory */
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	/* fill  the string */
	for (args = 0; args < ac; args++)
	{
		for (args_e = 0;; args_e++)
		{
			if (av[args][args_e] == '\0')
			{
				str[e] = '\n';
				break;
			}
			str[e] = av[args][args_e];
			e++;
		}
		e++;
	}
	return (str);
}
