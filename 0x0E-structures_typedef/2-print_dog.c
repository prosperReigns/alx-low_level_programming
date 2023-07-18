#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - prints structure of dog
 *@d: variable of struct
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		exit(EXIT_SUCCESS);
	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";
	printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
}
