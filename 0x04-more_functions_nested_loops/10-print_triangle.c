#include "main.h"
/**
 * print_triangle - prints the triangle shape
 * @size: defined parameter
 * Return:Always 0 after success
*/
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b > a; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
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
