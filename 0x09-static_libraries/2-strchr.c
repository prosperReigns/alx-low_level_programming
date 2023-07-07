#include "main.h"
#include <string.h>

/**
 *_strchr - returns the first occurance of a character in a string
 *@s: string to bee scanned
 *@c: character to be searched for
 *Return: Always ch
 */

char *_strchr(char *s, char c)
{
	char *ch;

	ch = strchr(s, c);
	return (ch);
}
