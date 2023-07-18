#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new dog
 *@name: first element
 *@age: second element
 *@owner: third element
 *Return: a pointer to a memory location
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *old_dog = malloc(sizeof(dog_t));

	if (old_dog == NULL)
		return (NULL);
	old_dog->name = name;
	old_dog->age = age;
	old_dog->owner = owner;
	return (old_dog);
}
