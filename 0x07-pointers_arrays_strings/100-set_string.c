#include "main.h"

/**
 *set_string - set string1 == string2
 *@s: a pointer to the address of another pointer
 *@to: a pointer to a value
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
