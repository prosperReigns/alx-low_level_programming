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

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
