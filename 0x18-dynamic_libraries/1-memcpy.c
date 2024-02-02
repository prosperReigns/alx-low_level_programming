#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@dest: dest memory area
 *@src: src memory area
 *@n: no of characters
 *Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);

}
