#include "main.h"

/**
 *print_square - print a square
 *@c: an integer
 *Description: A width and height of a specified size
 *Return: no value returned
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
