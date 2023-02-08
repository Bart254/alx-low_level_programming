#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends texts to a file
 * @filename: name of the file
 * @text_content: contents to be added to file
 *
 * The program appends text to file specified
 * Return: 1 if successful and -1 if unsuccessful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		count = strlen(text_content);
	if (write(fd, text_content, count) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

