#include "main.h"
#include <stdio.h>

/**
 *print_array - prints out individual element of array
 *@a: array of type int
 *@n: size of array
 *Return: nothind
 */

void print_array(int *a, int n)
{
	int i;

	n = 5;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(",");
		printf(" ");
		}
	}
	printf("\n");
}
