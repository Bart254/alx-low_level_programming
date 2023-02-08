#include "main.h"
#include <stdio.h>

/**
 * write_err - prints error message if writing to file_to fails
 * @filename: name of file
 */
void write_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * _close - closes descriptors
 * @fd: file descriptor
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_err - prints an error found in opening file
 * @filename: name of file
 */
void open_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * main - copies the content of one file to another
 * @ac: no of arguments passed
 * @av: pointer to args
 * Return: 0 if successful
 */
int main(int ac, char **av)
{
	int fd_src, fd_dest, n = 1;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
		open_err(av[1]);
	fd_dest = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 00664);
	if (fd_dest == -1)
	{
		_close(fd_src);
		write_err(av[2]);
	}
	while (n)
	{
		n = read(fd_src, buffer, 1024);
		if (n == -1)
		{
			_close(fd_src);
			_close(fd_dest);
			open_err(av[1]);
		}
		if (write(fd_dest, buffer, n) == -1)
		{
			_close(fd_src);
			_close(fd_dest);
			write_err(av[2]);
		}
	}
	_close(fd_src);
	_close(fd_dest);
	return (0);
}

