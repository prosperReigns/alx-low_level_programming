#include "main.h"
#include <string.h>

/**
 *puts_half - prints the last half of a string
 *@str: An arguement of type char
 *Return: nothing
 */

void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
