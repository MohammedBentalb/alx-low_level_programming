#include "main.h"

/**
 * create_file - Function that creats a file
 * @filename: file name
 * @text_content: text
 * Return: Return w
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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

		if (w == -1 || w != i)
			return (-1);
return (1);
}
