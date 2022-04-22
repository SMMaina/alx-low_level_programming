#include "main.h"
/**
 * leet - function that converts an alphabet to a value
 * @s: takes a pointer as an argument
 * Return: character
*/
char *leet(char *s)
{
	int i, j;
	char lettersbefore[] = "aAeEoOtTlL";
	char lettersafter[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == lettersbefore[j])
			{
				s[i] = lettersafter[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
