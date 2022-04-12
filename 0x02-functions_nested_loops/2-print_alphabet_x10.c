#include "main.h"

/**
 * void print_alphabet_x10(void)- function that prints ten times the alphabet
 * Return:always return 0 after success
 *
*/

void print_alphabet_x10(void);
{
	int m, n;

	for (m = 0; m <= 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
	}
	_putchar('\n');
}

