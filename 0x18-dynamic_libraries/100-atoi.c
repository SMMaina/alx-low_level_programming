#include <stdio.h>

/**

 * _atoi - a function that converts strings to integer

 * @s: an input string

 * Return: Integer

*/



int _atoi(char *s)

{

	int sign = 1;

	unsigned int total = 0;

	char nul = 0;



	while (*s)

	{

		if (*s == '-')

		{

			sign *= -1;

		}

		if (*s >= '0' && *s <= '9')

		{

			nul = 1;

			total = total * 10 + *s - '0';

		}

		else if (nul)

		{

			break;

		}

		s++;

	}

	if (sign < 0)

	{

		total = (-total);

	}

	return (total);

}