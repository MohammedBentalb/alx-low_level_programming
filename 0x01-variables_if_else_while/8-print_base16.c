#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;

while (i < 10)
{
putchar(i + '0');
i++;
}

i = 'a';

while (i <= 'f')
{
putchar(i);
i++;
}

putchar('\n');
return (0);
}
