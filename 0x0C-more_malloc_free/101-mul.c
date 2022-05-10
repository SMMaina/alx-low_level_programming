#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _isnum - check if is a number
 * @num: string to check
 * Return: 1 if num, 0 if not
 */
int _isnum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _memset - copies a character to the first n characters of the string
 * @s: source string
 * @b: value to replace
 * @n: number of bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _strlen - return length of string
 * @s: pointer to character
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;
	return (a);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: contents of the arguments
 * Return: 0 upon succes
 */
int main(int argc, char *argv[])
{
	int length, c, prod, i, j, l1, l2;
	int *res;

	if ((argc != 3 || !(_isnum(argv[1]))) || !(_isnum(argv[2])))
		puts("Error"), exit(98);
	l1 = _strlen(argv[1]), l2 = _strlen(argv[2]);
	length = l1 + l2;
	res = calloc(length, sizeof(int *));
	if (res == NULL)
		puts("Error"), exit(98);
	for (i = l2 - 1; i > -1; i--)
	{
		c = 0;
		for (j = l1; j > -1; j--)
		{
			prod = (argv[2][i] - '0') * (argv[1][j] - '0');
			c = (prod / 10);
			res[(i + j) + 1] += (prod % 10);
			if (res[(i + j) + 1] > 9)
			{
				res[i + j] += res[(i + j) + 1] / 10;
				res[(i + j) + 1] = res[(i + j) + 1] % 10;
			}
			res[(i + j) + 1] += c;
		}
	}

	if (res[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < length; i++)
		printf("%d", res[i]);
	printf("\n");
	free(res);
	return (0);
}


