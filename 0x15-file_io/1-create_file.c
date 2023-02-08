#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with permission rw-------
 * @filename: file to be opened or created
 * @text_content: content to file created or opened file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		count = strlen(text_content);
	if (write(fd, text_content, count) == -1)
		return (-1);
	close(fd);
	return (1);
}

