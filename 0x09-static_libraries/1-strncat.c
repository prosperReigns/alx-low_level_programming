#include "main.h"
#include <string.h>

/**
 *_strncat - add n number of characters to a string
 *@dest: string to be concatenated to
 *@src: string to be concatenated
 *@n: number of characters to concatenate
 *Return: Always dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
