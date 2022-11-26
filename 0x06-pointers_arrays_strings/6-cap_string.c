/**
 * cap_string - capitalizes all worlds in  a string
 * @s: string to be capitalized
 *
 * The function has word separators that it uses to capitalize the next wordd in a string passed to it
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	char *p = s;
	/* capitalizes the first letter*/
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 'a' + 'A';
	/* Loop moves along the elements of the string and uses word separators to capitalize each word*/
	for (; *s != '\0'; s++)
	{
		if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' || *s == ';' || *s == '.')
		{
			while (*(s + 1) != '\0')
			{
				s++;
				if (*s >= 'A' && *s <= 'Z')
					break;
				if (*s >= 'a' && *s <= 'z')
				{
					*s = (*s - 'a' + 'A');
					break;
				}
			}
		}
		else if (*s == '!' || *s == '?' || *s == '"' || *s == '(' || *s == ')' || *s == '{' || *s == '}')
		{
			while (*(s + 1) != '\0')
			{
				s++;
				if (*s >= 'A' && *s <= 'Z')
					break;
				if (*s >= 'a' && *s <= 'z')
				{
					*s = (*s - 'a' + 'A');
					break;
				}
			}
		}
	}
	return (p);
}
