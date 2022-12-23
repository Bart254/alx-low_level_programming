#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file
 * @text_content: text to be appended
 * The function appends text at the end of a file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, size;

	if (filename == NULL)
		return (-1);
	/* open the file */
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	/* append text */
	if (text_content != NULL)
	{
		size = strlen(text_content);
		w = write(fd, text_content, size);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/* close the file */
	close(fd);
	return (1);
}

