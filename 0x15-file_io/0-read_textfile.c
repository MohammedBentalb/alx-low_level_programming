#include "main.h"

/**
 * read_textfile -Function that prints a text file to posix
 * @filename: the file name
 * @letters: number
 * Return: Return w (number)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || w == -1 || r == -1)
		return (0);
	free(buffer);
	close(o);
return (w);
}
