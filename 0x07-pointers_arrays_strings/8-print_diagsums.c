#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sums of diagonals
 * @a: pointer to an array
 * @size: looks for the particular string
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		sum1 += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
