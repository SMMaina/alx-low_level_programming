#include <stdio.h>
/**
 * main -Print aplhabet in lower and upper caps
 * Return: Always 0 (success)
*/
int main(void)
{
	int ch;
	/* Print uppercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	/* print uppercase letters */
		for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
