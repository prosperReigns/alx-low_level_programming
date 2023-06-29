#include "main.h"

/**
 *reverse_array - reverses the element of an array
 *@a: a pointer to an array
 *@n: number of element in an array
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp;

		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
