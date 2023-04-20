#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum up numbers
 * @n: constant represent number of numbers
 * Return: Return res;
 */

int sum_them_all(const unsigned int n, ...)
{
	int number;
	int res = 0;
	va_list args;
	size_t i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		res += number;
	}
	va_end(args);

	return (res);
}
