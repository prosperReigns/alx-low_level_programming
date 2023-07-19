#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - iterate over an array
 *@array: an array
 *@size: size of an array
 *@action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		exit(EXIT_FAILURE);
	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
