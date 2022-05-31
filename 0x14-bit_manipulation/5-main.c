#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	return (0);
}
