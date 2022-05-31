#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: character to be printed
 *
 * Return: 1
 * on failure -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
