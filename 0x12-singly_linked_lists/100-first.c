#include <stdio.h>
#include <unistd.h>
void print_two_lines(void) __attribute__((constructor));
/**
 * print_two_lines - executes before main
 */


void print_two_lines(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
