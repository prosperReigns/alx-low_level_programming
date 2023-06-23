#include "main.h"

/**
 *print_line - line as long as n
 *@n: an integer
 *Return: no value returned
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
