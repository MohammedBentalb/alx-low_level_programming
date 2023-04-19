#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Fruntion that executes a function on each element of array
 * @array: array
 * @size: sive of array
 * @action: Function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
