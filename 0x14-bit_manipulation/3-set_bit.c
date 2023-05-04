#include "main.h"

/**
 * set_bit - Function to replace value of a bit to 1
 * @n: number
 * @index: index
 * Return: 1 || -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int res;

	if (index > 63)
		return (-1);

	res = 1 << index;
	*n |= res;
	return (1);
}
