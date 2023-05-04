#include "main.h"

/**
 * clear_bit - Function set value of bit to 0 at certain index
 * @n: pointer
 * @index: index
 * Return: Return 1 || -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n &= ~(i);
return (1);
}
