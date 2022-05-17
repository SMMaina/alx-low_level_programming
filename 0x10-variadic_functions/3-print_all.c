#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of data type to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *string, *new = "";
	va_list last;

	va_start(last, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", new, va_arg(last, int));
					break;
				case 'i':
					printf("%s%i", new, va_arg(last, int));
					break;
				case 'f':
					printf("%s%f", new, va_arg(last, double));
					break;
				case 's':
					string = va_arg(last, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", new, string);
					break;
				default:
					i++;
					continue;
			}
			new = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(last);
}
