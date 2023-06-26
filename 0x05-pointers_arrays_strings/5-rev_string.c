#include "main.h"
#include <string.h>

/**
 *rev_string - reverse a string
 *@s: points to the base of an array
 *Return: nothing
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s) - 1;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len--] = temp;
	}
}
