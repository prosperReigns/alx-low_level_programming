#include "main.h"

/**
 *string_toupper - converts all lowercase characters to uppercase
 *@str: A pointer to an array of characters
 *Return: modified string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
