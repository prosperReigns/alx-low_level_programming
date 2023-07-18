#include "dog.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

dog_t *new_dog(char *name,__attribute__((unused)) float age, char *owner)
{
	dog_t *old_dog = malloc(sizeof(char*)+sizeof(float)+sizeof(char*));

	if (old_dog == NULL)
		return (NULL);
	old_dog->name = name;
	old_dog->owner = owner;
	return (old_dog);
}
