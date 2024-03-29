#include "main.h"

/**
 *_strstr - returns first occurence of substring
 *@haystack: main string
 *@needle: substring
 *
 *Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);

}
