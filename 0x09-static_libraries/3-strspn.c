#include "main.h"
#include <string.h>

/**
 *_strspn - check for matching characters in string
 *@s: string to be scanned
 *@accept: characters to match in string1
 *Return:  Always an integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
