#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int r;

	r = wildcmp("main.c", ".c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*a*i*n**.*n*");
	printf("%d\n", r);
	return (0);
}
