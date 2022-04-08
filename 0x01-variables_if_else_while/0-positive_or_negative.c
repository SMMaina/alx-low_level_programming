#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: return 0 always after success
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
	printf("is positive");
	}
	if (n == 0)
	{
	printf("is zero");
	}
	if (n < 0)
	{
	printf("is negative");
	}
	return (0);
}
