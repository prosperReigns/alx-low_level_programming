#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates n number of strings
 *@s1: append destination
 *@s2: string to be appended
 *@n: number of characters to append
 *Return: a pointer to memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2, total_len = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;
	str = malloc(sizeof(*str) * total_len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	if (n >= len2)
		n = len2;
	for (j = 0; j < n; j++)
		str[len1 + j] = s2[j];
	str[total_len - 1] = '\0';
	return (str);
}
