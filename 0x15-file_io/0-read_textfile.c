#include "main.h"

/**
 * read_textfile - reads a file and outputs its contents
 * @filename: name of file to be read
 * @letters: number of letters that should be written
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_read;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	if (write(STDOUT_FILENO, buffer, num_read) == -1)
		return (0);
	free(buffer);
	return (num_read);
}
