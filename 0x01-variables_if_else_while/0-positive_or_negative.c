#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: always return 0 after success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d\n", n);
	if (n > 0)
	{
	printf("is positive\n");
	}
	if (n == 0)
	{
	printf("is zero\n");
	}
	if (n < 0)
	{
	printf("is negative\n");
	}
	return (0);
}
