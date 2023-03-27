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
int len = strlen(str);
for (i = middle; i < len; i++)
{
putchar(str[i]);
}
}
