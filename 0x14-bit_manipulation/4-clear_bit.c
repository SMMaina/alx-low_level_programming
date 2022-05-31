#include "main.h"
#define BIT 8
/**
 * powN - function for poer of numbers
 * @a: base
 * @b: power
 * Return: b to power a
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
 * clear_bit - sets the bit an index index to 0
 * @n: input integer
 * @index: returns bit value at given index
 * Return: 1 upon success and -1 for failue
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;

	if (index > sizeof(n) * BIT - 1)
		return (-1);

	count = powN(2, index);
	*n = (*n & count) ? *n ^ count : *n;
	return (1);
}
