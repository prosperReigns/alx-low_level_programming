#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - duplicate a string
 *@str: a pointer to an array of characters
 *Return: a pointer to a string
 */

char *_strdup(char *str)
{
	char *newstr;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	newstr = malloc(len * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
	free(newstr);
}
