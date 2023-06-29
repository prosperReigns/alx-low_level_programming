#include "main.h"
#include <string.h>

/**
 *_strncpy - copies x number of characters from a string to an empty array
 *@dest: Destination of copied string
 *@src: string2 to be copied
 *@n: number of characters to copied
 *Return: Always dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}
