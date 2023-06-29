#include "main.h"

/**
 *cap_string - capitalises first letter of every word
 *@str: An array of characters
 *Return: modified string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] = str[i];
				continue;
			}
		}
		if (str[i] == 32 || str[i] == 9 || str[i] == 46)
		{
			++i;
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] = str[i] + 32;
			}
		}
	}
	return (str);
}
