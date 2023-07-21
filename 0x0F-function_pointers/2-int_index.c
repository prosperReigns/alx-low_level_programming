#include "function_pointers.h"

/**
 *int_index - searches throught an integer
 *@array: an array
 *@size: size of array
 *@cmp: a pointer to a function
 *Return: first element not equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = 0, all_element = 0;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
	{
		return (-1);
	}
	else
	{
	while (i < size)
	{
		result = cmp(array[i]);
		all_element = all_element + result;
		if (result == 1)
			break;
		i++;
	}
	if (all_element == 0)
		return (-1);
	}
	return (i);
}
