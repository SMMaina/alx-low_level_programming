#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * stringlen - finds the length of string
 * @str: ptr to the str
 * Return: string length
 */
size_t stringlen(char *str)
{
	size_t a;

	for (a = 0; str[a]; a++)
		;
	return (a);
}

/**
 * create_file - system call to create a file
 * @filename: file to create
 * @text_content: a string that is nul
 * terminated to write to the file
 * Return: 1 upon success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filed;
	ssize_t length = 0;

	if (filename == NULL)
		return (-1);
	filed = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filed == -1)
		return (-1);
	if (text_content != NULL)
		length = write(filed, text_content, stringlen(text_content));
	close(filed);
	if (length == -1)
		return (-1);
	return (1);
}
