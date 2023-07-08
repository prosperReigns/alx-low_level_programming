#include "main.h"
#include <string.h>

/**
 *_strchr - searchrs for a character in a string
 *@s: string to be searched
 *@c: character to search for
 *Return: the value of res
 */

char *_strchr(char *s, char c)
{
	char *res;

	res = strchr(s, c);
	return (res);
}
