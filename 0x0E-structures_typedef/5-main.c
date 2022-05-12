#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("poppy", 3.5, "bob");
	printf("my name is %s, and i am %.1f :) - woof\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
