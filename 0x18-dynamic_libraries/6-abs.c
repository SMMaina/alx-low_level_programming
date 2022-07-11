#include "main.h"
/**
 * _abs - gets the absolute value of an integer
 * @r: declared
 * Return: always 0
 */
int _abs(int r)
{
	if (r < 0)
	{
		r *= -1;
		return (r);
	}
	return (r);
}
