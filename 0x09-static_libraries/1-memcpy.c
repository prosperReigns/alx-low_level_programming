#include "main.h"
#include <string.h>

/**
 *_memcpy - copies memory to another memory location
 *@dest: designated memory location
 *@src: source of memory for copy
 *@n: number of bytes to copy
 *Return: pointer to dest location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
