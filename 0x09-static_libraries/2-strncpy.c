#include "main.h"
#include <string.h>

/**
 *_strncpy - copies a part of a string
 *@dest: where string should be copied to
 *@src: string to be copied
 *@n: number of characters to copy
 *Return: Always dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
