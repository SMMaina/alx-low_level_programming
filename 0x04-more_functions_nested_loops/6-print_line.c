#include "main.h"
/**
 * print_line - prints a straight line
 * @n: defined parameter
*/
void print_line(int n);
{
	int b;

	for (b = 1; b <= n; b++)
	{
		if (b >= 1)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
