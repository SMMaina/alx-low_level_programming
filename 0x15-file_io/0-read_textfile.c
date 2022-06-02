#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a textfile and prints it to 1
 * @filename: name of file to be read
 * @letters: number/count of letters to read and print
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t red, wrt;
	char *buf;

	if (filename == NULL)
		return (0);
	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(filed);
		return (0);
	}
	red = read(filed, buf, letters);
	close(filed);
	if (red == -1)
	{
		free(buf);
		return (0);
	}
	wrt = write(STDOUT_FILENO, buf, red);
	free(buf);
	if (red != wrt)
		return (0);
	return (wrt);
}
