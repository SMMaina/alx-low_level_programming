#include "main.h"
/**
 * _strstr - locates and returns pointer to first occurrence of substring
 * @haystack: main string
 * @needle: substring to look for
 * Return: pointer to index of string at first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* iterate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				{
					x++, j++;
				}
				else
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (0);
}
