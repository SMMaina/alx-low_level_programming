#include <stdio.h>

/**
 * main - prints the sum of even valued Fibonacci sequence
 * Return: Always 0
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sibsum;
	float tot_sum;

	while (1)
	{
		sibsum = fib1 + fib2;
		if (sibsum > 4000000)
			break;

		if ((sibsum % 2) == 0)
			tot_sum += sibsum;

		fib1 = fib2;
		fib2 = sibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
