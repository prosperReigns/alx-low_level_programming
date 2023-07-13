#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array from a range of numbers
 *@min: an integer
 *@max: an integer
 *Return: a pointer to an memory
 */

int *array_range(int min, int max)
{
	int size, i;
	int *num;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	num = malloc(sizeof(int) * size);
	if (num == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		num[i] = i;
	return (num);
}
