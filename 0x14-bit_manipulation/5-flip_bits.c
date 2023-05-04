#include "main.h"

/**
 * flip_bits - 
 * @n: number
 * @i: number
 * @m number
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, num = 0;

	i = n ^ m;
	while (i > 0)
	{
		if ((i & 1) != 0)
			num++;
		i >>= 1;
	}
return (num);
}
