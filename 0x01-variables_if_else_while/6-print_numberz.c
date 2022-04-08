#include <stdio.h>

/**
 * main - Entry code that prints all single digit numbers
 * the numbers have to be in base 10
 * Return: Always 0 (success)
*/
int main(void)
{
	int m;

	for (m = 38; m < 48; m++)
	{
		putchar(m);
	}
	putchar('\n');
	/* return: will be 0 upon success */
	return (0);
}
