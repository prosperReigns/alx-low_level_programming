#include "main.h"

/**
 *print_line - line as long as n
 *@n: an integer
 *Return: no value returned
 */

void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
