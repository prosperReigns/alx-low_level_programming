#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *str_concat - concatenate string
 *@s1: string to append
 *@s2: string to append
 *Return: a pointer to a memory location
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, len1, len2, len_total = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len_total = len1 + len2 + 1;
	str = malloc(sizeof(char) * len_total);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < len2; i++)
		str[len1 + i] = s2[i];
	str[len_total - 1] = '\0';
	return (str);
}
