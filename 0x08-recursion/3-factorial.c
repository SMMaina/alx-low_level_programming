#include "main.h"
/**
 * factorial - function to find the factorial of a number
 * @n: the defined parameter
 * Return: an integer
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
