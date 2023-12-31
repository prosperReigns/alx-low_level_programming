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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	row = malloc(sizeof(int *) * height);
	if (row == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		row[i] = malloc(sizeof(int) * width);
		if (row[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(row[j]);
				free(row);
			}
			return (NULL);
		}
	}
	return (row);
}
