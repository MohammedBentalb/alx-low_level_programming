#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - function that prints everything
 * @format: array of characters passed to function
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	size_t i = 0;
	char *comma, *p;
	va_list args;

	comma = "";
	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
				case 'c':
				printf("%s%c", comma, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", comma, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", comma, va_arg(args, double));
				break;
			case 's':
				p = va_arg(args, char *);
				if (p == NULL)
					p = "(nill)";
				printf("%s%s", comma, p);
				break;
		}
		i++;
		comma = ", ";
	}
	printf("\n");

	va_end(args);
}
