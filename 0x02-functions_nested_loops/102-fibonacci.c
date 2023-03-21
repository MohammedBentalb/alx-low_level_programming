#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always (0).
 */

int main(void)
{

long long int a, b, c;

a = 1;
b = 2;

int i;

printf("%lld, %lld, ", a, b);

for (i = 3; i <= 50; i++)
{
c = a + b;

printf("%lld", c);

if (i < 50)
{
printf(", ");
}
a = b;
b = c;


}
printf("\n");
return (0);
}
