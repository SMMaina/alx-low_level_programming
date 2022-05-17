#include "variadic_functions.h"

/**
 * print_strings - function that prints strings of a word
 * @separator: separates the strings
 * @n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list word;
	char *str;

	va_start(word, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(word, char*);
		if (!str)
		{
			str = "(null)";
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && !i)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(word);
}
