#include "main.h"
#include "string.h"

/**
 *_strpbrk - search for matching characters
 *@s: string to be scanned
 *@accept: characters to match
 *Return: Always ch
 */

char *_strpbrk(char *s, char *accept)
{
	char *ch;

	ch = strpbrk(s, accept);
	return (ch);
}
