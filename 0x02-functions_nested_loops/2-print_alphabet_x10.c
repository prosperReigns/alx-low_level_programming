#include "main.h"

/**
 *print_alohabet_x10 - prints alphabets
 *Return: Always void
 */

void print_alphabet_x10(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		int j = 0;

		while (j < 10)
		{
			_putchar(i);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
