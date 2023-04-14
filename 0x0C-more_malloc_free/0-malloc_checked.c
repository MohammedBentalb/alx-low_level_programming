#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - Function that allocate memory
* @b: size of memory to allocate
* exit: Exit the program with the value of 98 in case the pointer = null
* Return: Return p
*/


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);

}
