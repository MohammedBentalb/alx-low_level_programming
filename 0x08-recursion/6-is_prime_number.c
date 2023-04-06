#include "main.h"
/**
 * prime_num - Telss if number is prime or not (1 / 0)
 * @n: number
 * @dv: the dvisor
 * Return: Return prime n
 */
int prime_num(int n, int dv)
{
	if (dv >= n && n > 1)
		return (1);
	else if (n % dv == 0 || n <= 1)
		return (0);
	else
		return (prime_num(n, dv + 1));
}
/**
 * is_prime_number - chek number
 * @n: number
 * Return: Return 1 for prime and 0 if not
 */
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
