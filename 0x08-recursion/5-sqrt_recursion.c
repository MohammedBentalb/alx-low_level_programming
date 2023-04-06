#include "main.h"

int square(int n, int sqr);

/**
 * square - calculate square of a number
 * @n: number
 * @sqr: square of n
 * Return: Return sqrt of number
 */
int square(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr * sqr < n)
		return (square(n, sqr + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - Print sqrt of number
 * @n: number
 * Return: Return and call square function.
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
