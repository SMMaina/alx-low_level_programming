#include <stdio.h>

void hare_tortoise(void)__attribute__((constructor));

/**
 * hare_tortoise - prints a string before main function is executed
 * prints You're beat! and yet, you must allow,\n
 * I bore my house upon my back!
 */

void hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
