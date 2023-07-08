#include "main.h"
#include <ctype.h>

/**
 *_isupper - check for uppercase
 *@c: an integer
 *Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
