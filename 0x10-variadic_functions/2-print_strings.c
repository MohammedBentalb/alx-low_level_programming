#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function to print a string
 * @separator: a string
 * @n: number of strings passed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *p;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);

		if (p == NULL)
			printf("(nil)");

		printf("%s", p);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
