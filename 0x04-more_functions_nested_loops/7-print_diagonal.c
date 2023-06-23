#include "main.h"

/**
 *print_diagonal - prints \ diagonally on newline
 *@n: An integer
 *Return: No value returned
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				int j;

				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
