#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
int i;
int middle = strlen(str) / 2;
for (i = middle; i < strlen(str); i++)
{
putchar(str[i]);
}
}
