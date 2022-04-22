#include "main.h"
/**
 * string_toupper- translates lower character into upper
 * @str: string to convert
 * Return: a pointer to a character
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
