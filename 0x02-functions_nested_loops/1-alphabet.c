#include "main.h"

/**
 * print_alphabet-function that will print the alphabets
 * Return: always return 0 after success
 *
*/
void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n')
}
