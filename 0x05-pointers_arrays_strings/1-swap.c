#include "main.h"

/**
 *swap_int - swaps two numbers
 *@a: points to ythe address of a data value
 *@b: points to the adddress of a data value
 *Return: nothing
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
