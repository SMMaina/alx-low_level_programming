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
	set_bit(&n, 5);
	printf("%lu\n", n);
	return (0);
}
