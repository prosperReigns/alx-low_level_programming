#include "main.h"
#include <string.h>

/**
 *_strcpy - copies a string
 *@dest: string to be copied to
 *@scr: string to be copied
 *Return: Alwayd dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
