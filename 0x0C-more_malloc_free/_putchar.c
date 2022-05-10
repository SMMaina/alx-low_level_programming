#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: charcater to pirnt
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
