#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_realloc - function that reallocates a memory block
* @ptr: pointer
* @old_size: as the variable name's tell
* @new_size: the name tells it all
* Return: Return moh (acc to my name mohammed :) ) or || ptr || null
*/


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *moh;
	unsigned int bnt = 0;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
			if (ptr == NULL)
				return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	moh = malloc(sizeof(char) * new_size);
		if (moh == NULL)
			return (NULL);

	if (new_size > old_size)
	{
		while (bnt < old_size)
		{
			moh[bnt] = ((char *)ptr)[bnt];
			bnt++;
		}
	}
	else
	{
		while (bnt < new_size)
		{
			moh[bnt] = ((char *)ptr)[bnt];
			bnt++;
		}
	}
return (moh);
}
