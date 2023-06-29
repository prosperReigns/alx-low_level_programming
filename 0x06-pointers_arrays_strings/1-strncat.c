#include "main.h"
#include <string.h>

/**
 *_strncat - concatenates two string using a count value
 *@dest: An array of characters
 *@src: A string
 *@n: number of count
 *Return: Always pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
