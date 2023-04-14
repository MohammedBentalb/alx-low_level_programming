#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* *_memory_set_to_zero - Function to set memory to zero
* @pp: pointer
* @c: character
* @size: size of memory
* Return: Return pp
*/

void *_memory_set_to_zero(char *pp, char c, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		pp[i] = c;
	}


return (pp);
}


/**
* *_calloc - Function to allocate memory to an array
* @nmemb: number of ellements
* @size: how much byte each element is taking
* Return: Return p
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);

	_memory_set_to_zero(p, 0, nmemb * size);

return (p);
}
