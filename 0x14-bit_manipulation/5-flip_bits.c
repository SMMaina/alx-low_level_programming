#include "main.h"

/**
 * flip_bits - returns number of bits
 * needed to flip to get to the next
 * number
 * @n: first input
 * @m: second input
 * Return: bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int rot = 0;

	while (a)
	{
		if (1 & a)
			rot++;
		a = a >> 1;
	}
	return (rot);
}
