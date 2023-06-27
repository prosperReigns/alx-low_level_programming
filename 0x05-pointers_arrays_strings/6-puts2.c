#include "main.h"
#include <string.h>

/**
 *puts2 - outputs even numbers and 0
 *@str: An array of type char
 *Return: nothing
 */

void puts2(char *str)
{
	int i, len;
	int other_ch = 0;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] % 2 == 0)
		{
			other_ch = str[i];
			_putchar(other_ch++);
		}
	}
	_putchar('\n');
}
