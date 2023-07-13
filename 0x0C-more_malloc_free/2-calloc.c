#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocates memory for a number of elements
 *@nmemb: number of elements in an array
 *@size: size of array
 *Return: a pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	memset(arr, 0, (size * nmemb));
	return (arr);
}
