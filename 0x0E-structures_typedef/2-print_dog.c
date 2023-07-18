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
	if (d == NULL)
		exit(EXIT_FAILURE);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
