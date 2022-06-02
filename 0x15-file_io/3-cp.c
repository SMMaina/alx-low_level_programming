#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check1 - checks for the no of args
 * @argc: no of args\return: void
 */
void check1(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check2 - checks that file_from is in existence and is readbale
 * @check: flag for true or falese
 * @file: file_from name
 * @filed_from: file descriptor of file_from -1
 * @filed_to: file descriptor of file_to -1
 * Return: void
 */
void check2(ssize_t check, char *file, int filed_from, int filed_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
		if (filed_from != -1)
			close(filed_from);
		if (filed_to != -1)
			close(filed_to);
		exit(98);
	}
}
/**
 * check3 - checks if file descriptors were well closed
 * @check: flag for true or false
 * @file: filed_to name
 * @filed_from: file descriptor of file_form, -1
 * @filed_to: file descriptor of file_t0
 * Return: void
 */
void check3(ssize_t check, char *file, int filed_from, int filed_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close filed %s\n", file);
		if (filed_from != -1)
			close(filed_from);
		if (filed_to != -1)
			close(filed_to);
		exit(99);
	}
}
/**
 * check4 - check  for closure of file descritors
 * @check: check if true or false
 * @filed: file descriptor
 * Return: void
 */
void check4(int check, int filed)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close filed %d\n", filed);
		exit(100);
	}
}
/**
 * main - func to copy from one file to another
 * @argc: number of args passed
 * @argv: array of ptrs to args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int filed_from, filed_to, close_to, close_from;
	ssize_t red, wrt;
	char buf[1024];
	mode_t fileper;

	check1(argc);
	filed_from = open(argv[1], O_RDONLY);
	check2((ssize_t)filed_from, argv[1], -1, -1);
	fileper = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	filed_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, fileper);
	check3((ssize_t)filed_to, argv[2], filed_from, -1);
	red = 1024;

	while (red == 1024)
	{
		red = read(filed_from, buf, 1024);
		check2(red, argv[1], filed_from, filed_to);
		wrt = write(filed_to, buf, red);
		if (wrt != red)
			wrt = -1;
		check3(wrt, argv[2], filed_from, filed_to);
	}
	close_to = close(filed_to);
	close_from = close(filed_from);
	check4(close_to, filed_to);
	check4(close_from, filed_from);
	return (0);
}
