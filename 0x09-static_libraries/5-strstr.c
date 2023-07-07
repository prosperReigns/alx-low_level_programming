#include "main.h"
#include <string.h>

/**
 *_strstr - searchs for a string in another
 *@haystack: an array of characters to be scanned
 *@needle: An array of characters to match
 *Return: a pointer to a string
 */

char *_strstr(char *haystack, char *needle)
{
	char *str;

	str = strstr(haystack, needle);
	return (str);
}
