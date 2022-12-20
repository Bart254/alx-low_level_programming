#include "main.h"

/**
 * _path - gives the absolute path of a function
 * @c: c whose path is to be found
 *
 * Return: full path of c
 */
char *_path(char *c)
{
	char *abs_path;
	struct stat statbuffer;
	int i, e, lc, size;
	char *token = strdup(getenv("PATH")), *subtoken;
	char *dir[15];

	if (c[0] == 'e' && c[1] == 'x' && c[2] == 'i' && c[3] == 't')
                exit(0);
	/* if c exists return c */
	if (stat(c, &statbuffer) == 0)
		return (c);
	for (i = 0, lc = 0; c[i]; i++)
		lc++;
	subtoken = strtok(token, ":");
	for (i = 0; subtoken != NULL; subtoken = strtok(NULL, ":"), i++)
		dir[i] = subtoken;
	dir[i] = NULL;
	for (i = 0; dir[i] != NULL; i++)
	{
		for (e = 0, size = lc; dir[i][e]; e++)
			size++;
		abs_path = malloc((size + 2) * sizeof(char));
		if (abs_path == NULL)
			return (NULL);
		for (e = 0; dir[i][e]; e++)
			abs_path[e] = dir[i][e];
		abs_path[e] = '/';
		for (e++, lc = 0; c[lc]; lc++, e++)
			abs_path[e] = c[lc];
		abs_path[e] = '\0';
		/* check if it exists */
		if (stat(abs_path, &statbuffer) == 0)
			return (abs_path);
	}
	return (NULL);
}

/**
 * main - executes a shell program
 * This is a program that runs as a typical Linux Shell
 * @ac: number of arguments passed
 * @av: array of arguments passed
 * @env: environment variables
 *
 * Return: 0 (Successful)
 */
int main(int ac, char **av, char **env)
{
	int e, child_pid, status;
	char *ptr = NULL, *token, *path;
	char *args[100];
	size_t n = 0;

	(void)ac;
	while (1)
	{
		write(2, "$ ", 2);
		if (getline(&ptr, &n, stdin) == -1)
			break;
		token = strtok(ptr, " \n");
		for (e = 0; token != NULL; e++, token = strtok(NULL, " \n"))
			args[e] = token;
		args[e] = NULL;
		if (args[0] != NULL)
		{
			path = _path(args[0]);
			if (path != NULL)
			{
				child_pid = fork();
				if (child_pid != 0)
					wait(&status);
				else
				{
					execve(path, args, env);
					perror(av[0]);
				}
			}
			else
			{
				execve(args[0], args, env);
				perror(av[0]);
			}
		}
	}
	return (0);
}

