#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Funtion to print numbers
 * @separator: a comma
 * @n: number of numbers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	int number;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
