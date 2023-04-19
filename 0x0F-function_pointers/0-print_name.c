#include <stdio.h>
#include <function_pointers.h>

/**
 * print_name - Function that prints the name
 * @name: the name
 * @action: Function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
