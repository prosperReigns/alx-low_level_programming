#include "main.h"
#include <string.h>

/**
 *_memset - copies character of n byte to memory
 *@s: a pointer to a block of memory to fill
 *@b:value to be set
 *@n: number of byte to set
 *Return: Always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
