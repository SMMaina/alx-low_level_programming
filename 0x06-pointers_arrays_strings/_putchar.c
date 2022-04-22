#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: defined parameter
 *
 * Return: always 1
 * On error, -1 is returned and errno is set accordingly
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
