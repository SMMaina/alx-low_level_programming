#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
*/

void print_alphabet_x10(void)
{
	int m, n;

	for (m = 0; m <= 10; m++)
	{
		for (n = 'a'; n < 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

