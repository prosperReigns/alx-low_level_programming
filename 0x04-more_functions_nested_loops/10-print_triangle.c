#include "main.h"

/**
 *print_triangle - equaliteral triangle
 *@size: an integer
 *Return: no value returned
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
