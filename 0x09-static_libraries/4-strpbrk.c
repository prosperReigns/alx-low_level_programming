#include "main.h"
#include <string.h>

/**
 *_strpbrk - returns matching string
 *@s: string to be scanned
 *@accept: matching string
 *Return: pointer to value
 */

char *_strpbrk(char *s, char *accept)
{
	char *res;

	res = strpbrk(s, accept);
	return (res);
}
