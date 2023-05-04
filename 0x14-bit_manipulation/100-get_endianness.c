#include "main.h"

/**
 * get_endianness - Function that checks endianness
 * Return: Return 0 (big endian) || 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;


	return ((int)*b);
}
