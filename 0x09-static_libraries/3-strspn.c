#include "main.h"
#include <string.h>

/**
 *_strspn - return the lenght of mathched substring str1 in str2
 *@s: string to be scanned
 *@accept: string to be matched
 *Return: Always len
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
