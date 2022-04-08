#include <stdio.h>

/**
 * main - the entry point and print all numbers of base 16
 * followed by a new line
 * Return: return 0 (success)
*/
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
