#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * stringlen - finds the length of a string
 * @str: ptr to the string
 * Return: length of string
 */
size_t stringlen(char *str)
{
	size_t len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}
/**
 * append_text_to_file - appends text to file end
 * @filename: file to be appended
 * @text_content: string to add to end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
		return (-1);
	if (text_content != NULL)
		length = write(filed, text_content, stringlen(text_content));
	close(filed);
	if (length == -1)
		return (-1);
	return (1);
}
