#include "main.h"
#include <string.h>

/**
 *_memset - fill memomry area with constant
 *@s: starting point in memory
 *@b: value to be filled
 *@n: number of byte to set
 *Return: Always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
