#include "main.h"

/**
 * read_textfile - reads and prints a file
 * @filename: file to be read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read or written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[letters] = '\0';
	close(fd);
	w = write(STDOUT_FILENO, buffer, letters);
	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	return (r);
}

