#include "main.h"
/**
 * is_prime - recursively divide by higher divisor, skips even nums
 * @n: number to check if its prime
 * @divisor: divisor to check with
 * Return: 1 if prime, 0 if not
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - checks whether a number is a prime number
 * @n: number to check
 * Return: i if prime, 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (is_prime(n, divisor));
}
