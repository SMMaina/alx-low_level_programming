#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "poppy", 3.5, "Bob");
	printf("my name is %s, and i am %.1f :) - woof\n", my_dog.name, my_dog.age);
	return (0);
}
