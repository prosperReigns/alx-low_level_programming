#include "dog.h"

/**
 *init_dog - initialsies a object structure
 *@d: variable
 *@name: first member
 *@age: second member
 *@owner: third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
