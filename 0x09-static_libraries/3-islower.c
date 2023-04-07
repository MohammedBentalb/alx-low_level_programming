#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - Retuns 1 if char is lowercase character
 * else, return 0
 *
 * @c: character
 *
 * Return: Return 1 for 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
