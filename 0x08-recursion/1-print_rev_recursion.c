#include "main.h"

/**
 * _strlen_recursion - Print the length of a string
 * @s: The string
 * Return: Return the number (length)
 */

void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);
putchar(*s);

}
