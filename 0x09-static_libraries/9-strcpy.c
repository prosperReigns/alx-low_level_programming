#include "main.h"
#include <string.h>

/**
 *_strcpy - update value in memory
 *@dest: A variable that points to data value
 *@src: An array of characters
 *Return: Always dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
