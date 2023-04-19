#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints the name
 * @name: the name
 * @f: Function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
