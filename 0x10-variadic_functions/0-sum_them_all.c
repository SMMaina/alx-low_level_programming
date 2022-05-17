#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that prints sum of arguments passed to function
 * @n: number of integers to add
 * Return: sum of the arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
