#include "main.h"

/**
 * binary_to_uint -Function to print decimal of binary
 * @b: pointer
 * Return: Retunr res || 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, des = 1;
	int i, l = 0;

	if (!b)
		return (0);

	while (b[l])
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			res += des;
	des *= 2;
	}
return (res);
}
