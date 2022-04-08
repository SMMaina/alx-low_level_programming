#include <stdio.h>
/**
 * main - The entry point
 * printing single digits of base 10 followed by a new line
 * Return: always 0 (Success)
*/

int main(void)
{
	int f;

	for (f = 0; f < 10; f++)
		printf("%d", f);
	printf("\n");
	/* return: return will list the values upto 9 */
	return (0);
}
