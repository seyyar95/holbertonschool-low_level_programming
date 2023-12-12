#include "main.h"
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 *Return: If the function fails or filename is NULL -1
 *If the file does not exist -1
 *Otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, strlen(text_content));

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
