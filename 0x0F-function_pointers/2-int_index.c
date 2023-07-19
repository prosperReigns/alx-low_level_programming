#include "function_pointers.h"

/**
 *
 *
 *
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
	while (i < size)
	{
		result = cmp(array[i]);
		if (result == 0)
			return (-1);
		else
			return (array[i]);
	}
	}
	return (0);
}
