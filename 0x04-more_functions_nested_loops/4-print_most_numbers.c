#include "main.h"

/**
 *print_most_numbers - excluding 2 and 4
 *Return: No value returned
*/

void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		if (num == 2 || num == 4)
		{
			num++;
			continue;
		}
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
