#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: int
*/
int main(void)
{
	int a;

	srand(time(0));
	a = rand();
	printf("%i\n", a);
	return (0);
}
