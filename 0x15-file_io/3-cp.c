#include "main.h"

/**
 * main - copies the contents of one file to another
 * @file_1: source
 * @file_2: Destination
 *
 * Return: Nothing
 */
int main(int ac, char **av)
{
	int s_fd, d_fd, r, w;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	s_fd = open(av[1], O_RDONLY);
	r = read(s_fd, buffer, 1024);
	if (s_fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	d_fd = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (d_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	w = write(d_fd, buffer, 1024);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		 exit(99);
	}
	if (close(d_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d_fd);
		exit(100);
	}
	if (close(s_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s_fd);
		exit(100);
	}

	return (0);
}

