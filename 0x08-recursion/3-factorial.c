#include <stdio.h>


/**
 * factorial - Print the factorial of a given number
 * @n: number
 * Return: Return the result (facorial)
 **/

int factorial(int n)
{

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
