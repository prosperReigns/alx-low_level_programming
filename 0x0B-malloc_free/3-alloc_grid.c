#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - creates a 2d array
 *@width: Width of grid
 *@height: height of grid
 *Return: a double pointer
 */

int **alloc_grid(int width, int height)
{
	int **row;
	int i;

	row = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		*(row + i) = malloc(sizeof(int) * width);
	return (row);
}
