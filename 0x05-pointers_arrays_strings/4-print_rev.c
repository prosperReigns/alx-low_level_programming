#include "main.h"
#include <string.h>

/**
 *print_rev - reverse a string
 *@s: points to the address of a data value in memory
 *Return: nothing
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
