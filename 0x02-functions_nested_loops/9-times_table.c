#include "main.h"

/**
 *times_table - 9x
 *Description: prints the 9x table
 *Return: no return value
 */

void times_table(void)
{
	int num, result, first, second;
	int count = 0;

	while (count < 10)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		num = 1;
		while (num < 10)
		{
			result = count * num;
			first = result / 10;
			second = result % 10;
			if (first == 0)
			{
				_putchar(' ');
				_putchar(second + '0');
			}
			else
			{
				_putchar(first + '0');
				_putchar(second + '0');
			}
			if (num < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			num++;
		}
		_putchar('\n');
		count++;
	}
}
