#include "main.h"
#include <string.h>

/**
 *_strncat - concatenates n number of characters to another string
 *@dest: destination of concatenated string
 *@src: string to be concatenated
 *Return: Always dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
