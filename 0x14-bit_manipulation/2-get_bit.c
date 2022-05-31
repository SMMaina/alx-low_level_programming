#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to check bits in
 * @index: index at which to check
 * Return: value of bit or -1 if there's an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int den, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	den = 1 << index;
	checker = n & den;
	if (checker == den)
		return (1);
	return (0);
}
