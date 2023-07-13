#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - check memory
 *@b: an inerger
 *Return: a pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ch;

	ch = malloc(b);
	if (ch == NULL)
		exit(98);
	return (ch);
}
