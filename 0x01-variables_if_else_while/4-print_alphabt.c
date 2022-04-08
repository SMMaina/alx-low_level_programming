#include <stdio.h>

/**
 * main - Entry point
 * source code containing alphabets except q and e
 * Return: 0 always as Success
*/

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
