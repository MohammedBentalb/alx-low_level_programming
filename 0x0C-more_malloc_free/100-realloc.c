#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_realloc - function that reallocates a memory block
* @ptr: pointer
* @old_size: as the variable name's tell
* @new_size: the name tells it all
* Return: Returnp p || ptr || null
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	char *p;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size * sizeof(char));
			if ( p == NULL)
				return (NULL);

	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (p);
	}
	else
	{
		for (j = 0; j < new_size; j++)
		{
			p[j] = ((char *)ptr)[j];
		}
		free(ptr);
		return (p);
	}
}
