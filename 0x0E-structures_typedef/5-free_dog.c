#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees memory allocated in heap
 *@d: struct variable
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
