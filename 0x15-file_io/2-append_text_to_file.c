#include "main.h"

/**
 * append_text_to_file - Function that appends to a file
 * @filename: file name
 * @text_content: content
 * Return: Return w
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, w = 1;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	i = strlen(text_content);
	w = write(fd, text_content, i);
	close(fd);

	if (w == -1)
		return (-1);
return (1);
}
