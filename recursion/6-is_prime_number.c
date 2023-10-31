#include "main.h"

/**
 * is_prime - second function
 * @n: first int
 * @i: second int
 * Return: if the number is prime or not
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	else
		return (is_prime(n, i + 1));
}

/**
 * is_prime_number - first function
 * @n: first int
 * Return: return is_prime
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
