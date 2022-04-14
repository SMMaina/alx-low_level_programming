#include "main.h"
/**
 * _isdigit - checks for digit 0 through 9
 * @c: defined parameter
 * Return:Always 1 after success
*/
int _isdigit(int c)
{
	int digit;
	int isdigit = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
