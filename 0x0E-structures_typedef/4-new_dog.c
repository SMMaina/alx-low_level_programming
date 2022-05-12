#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - makes a new struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: caregiver of the dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, name1, owner1;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (name1 = 0; name[name1]; name1++)
		;
	name1++;
	dog->name = malloc(name1 * (sizeof(char)));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name1; i++)
		dog->name[i] = name[i];

	dog->age = age;
	for (owner1 = 0; owner[owner1]; owner1++)
		;
	owner1++;
	dog->owner = malloc(owner1 * (sizeof(char)));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
