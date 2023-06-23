#include "main.h"

/**
 *more_numbers - prints number 10 times
 *Description: print 1 to 14 on ten lines
 *return: no return value
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
