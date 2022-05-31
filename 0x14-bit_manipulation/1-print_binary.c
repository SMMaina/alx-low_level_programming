#include "main.h"
#define BIT_SIZE 8

/**
 * powN - power of a number function
 * @a: base
 * @b: power
 * Return: result
 */
unsigned long int powN(int a, int b)
{
	unsigned long int res = 1;

	while (b)
	{
		res *= a;
		b--;
	}
	return (res);
}
/**
 * print_binary - prints a number in binary form
 * @n: integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int count = powN(2, sizeof(unsigned long int) * BIT_SIZE - 1);
	int beg = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (count)
	{
		if (!(count & n) && beg)
		{
			_putchar('0');
		}
		else if (count & n)
		{
			_putchar('1');
			beg = 1;
		}
		count = count >> 1;
	}
}
