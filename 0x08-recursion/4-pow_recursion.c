#include "main.h"
/**
 * _pow_recursion - function that finds power of numbers
 * @x: takes first integer as the first argument
 * @y: takes second integer as power
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0 || x == 1)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
