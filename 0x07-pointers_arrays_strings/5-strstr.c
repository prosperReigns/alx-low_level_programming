#include "main.h"
#include <string.h>

/**
 *_strstr - finds matching characters in a string
 *@haystack: string to be scanned
 *@needle: string to be matched
 *Return: a pointer to machhing substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *res;

	res = strstr(haystack, needle);
	return (res);
}
