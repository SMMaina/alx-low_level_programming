#include "main.h"



/**

 * _isalpha - checks for alphabetic character

 * @c: taken as parameter

 * Return: Always (1) incase of alphabetic character

*/



int _isalpha(int c)

{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

	{

		return (1);

	}

	else

	{

		return (0);

	}

}