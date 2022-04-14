#include "main.h"
/**
 * print_square - prints the square shape
 * @size: defined parameter
*/
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
