#include <stdio.h>

/**
 * main - Entry code that prints all single digit numbers
 * the numbers have to be in base 10
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	/* return: will be 0 upon success */
	return (0);
}
