#include <stdio.h>

/**
 * main - The entry point print reverse lower case characters
 * followed by a new line
 * Return: always 0 (success)
*/

int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
