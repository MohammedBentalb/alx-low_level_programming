#include "main.h"
void error_handler(int src, int dest, char *argv[]);
/**
 * main - Entry function
 * @argc: number of arguments
 * @argv: arguments
 * Return: Return depenging on the case 0 || err || 98
 */
int main(int argc, char *argv[])
{
	int src, dest, err;
	char buffer[1024];
	ssize_t r, w;

		if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(src, dest, argv);

	r = 1024;
	while (r == 1024)
	{
		r = read(src, buffer, 1024);
		if (r == -1)
			error_handler(-1, 0, argv);
		w = write(dest, buffer, r);
		if (w == -1)
			error_handler(0, -1, argv);
	}
	err = close(src);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	err = close(dest);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
return (0);
}
/**
 * error_handler - Function that handel errors
 * @src: file source
 * @dest: file destination
 * @argv: arguments
 * Return: Return err 98
 */
void error_handler(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
