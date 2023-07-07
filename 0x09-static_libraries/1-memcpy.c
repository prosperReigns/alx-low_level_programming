#include "main.h"
#include <string.h>

/**
 *_memcpy - copies sting to a new memory location
 *@dest: destination of memory
 *@src: source to to copy from
 *@n: number of bytes to copy
 *Return: Always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
