#include "main.h"
#include<ctype.h>

/**
 * _isdigit - check for digit 0-9
 * @c: an integer
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
