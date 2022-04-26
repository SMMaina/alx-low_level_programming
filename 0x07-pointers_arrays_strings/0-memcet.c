#include "main.h"
/**
 * _memset - fills n bytes of memory with a constant value
 * @s: pointer to a memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n; /* accept positive values only */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}

		return (s);
	}
