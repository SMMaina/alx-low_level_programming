#include <stdio.h>
#include "main.h"

/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	return (0);
}
