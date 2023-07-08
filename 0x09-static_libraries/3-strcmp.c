#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two string for equality
 *@s1: An array of characters
 *@s2: an array of characters
 *Return: 0 if equal, >0 or <0 based on greater ascii value
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
