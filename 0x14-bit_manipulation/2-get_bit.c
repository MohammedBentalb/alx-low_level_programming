#include "main.h"

/**
 * get_bit - Function that prints value of a bit
 * @n: number
 * @index: index
 * Return: Return value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
