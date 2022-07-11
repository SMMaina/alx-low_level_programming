#include "main.h"

/**

 * _strspn - a function to return the first occurrence of a string

 * @s: Scan the strng

 * @accept: looks for the particular string

 * Return: an unsigned integer

 */



unsigned int _strspn(char *s, char *accept)

{

	int i, j, count = 0;



	i = 0;



	while (s[i] != '\0')

	{

		for (j = 0; accept[j] != '\0'; j++)

		{

			if (s[i] == accept[j])

			{

				count++;

				break;

			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])

			{

				return (count);

			}

		}

		i++;

	}

	return (count);

}