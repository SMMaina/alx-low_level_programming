#include "main.h"

/**
 * _isupper - checks for uppercase character

 * @c: defined parameter

 * Return: Always 1 after success

*/

int _isupper(int c)

{

	char upper;

	int isupper = 0;



	for (upper = 'A'; upper <= 'Z'; upper++)

	{

		if (c == upper)

		{

			isupper = 1;

			break;

		}

	}

	return (isupper);

}
