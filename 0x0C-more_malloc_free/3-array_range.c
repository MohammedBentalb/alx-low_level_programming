#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* *array_range - Function that creat an array of interegs
* @min: an integer
* @max: an integer
* Return: Return p || NULL depends
*/

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}

return (p);
}
