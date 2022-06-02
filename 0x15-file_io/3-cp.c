#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * check1 - checks for correct no of args
 * @argc: no of args
 * Return: void
 */
void check1(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file-to\n");
		exit(97);
	}
}

/**
 * check2 - check that file_from exists and can be read
 * @check: check if true or false
 * @file: file_from name
 * @fd_from: file descriptor
 * @fd_to: file descriptor
 * Return: void
 */
void check2(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}
/**
 * check3 - check that file-to was created and can be written to
 * @check: check if true or false
 * @file: file_to name
 * @fd_from: file descriptor
 * @fd_to: file descriptor
 * Return: void
 */
void check3(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}
/**
 * check4 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 * Return: void
 */
void check4(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file
 * @argc: no of args passed
 * @argv: array of pointers to the args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buf[1024];
	mode_t fileper;

	check1(argc);
	fd_from = open(argv[1], O_RDONLY);
	check2((ssize_t)fd_from, argv[1], -1, -1);
	fileper = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, fileper);
	check3((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buf, 1024);
		check2(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buf, lenr);
		if (lenw != lenr)
			lenw = -1;
		check3(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check4(close_to, fd_to);
	check4(close_from, fd_from);
	return (0);
}
