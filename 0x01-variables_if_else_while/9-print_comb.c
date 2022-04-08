#include <stdio.h>

/**
 * main - print all posible combinations of signle digit numbers
 * followed by a new line
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
