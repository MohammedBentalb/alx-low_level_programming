#include "main.h"


/**
 * _strlen_recursion - Print the lenght of *s
 * @s: The string
 * Return: Return the length of *s
 */

int _strlen_recursion(char *s)
{
int n;

if (*s == '\0')
{
	return (0);
}

return (1 + _strlen_recursion(s + 1));
}
