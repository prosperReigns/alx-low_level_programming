#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - print name
 *@name: A string
 *@f: calls functionpointer
 */

void print_name(char *name, void (*f)(char *str))
{
	if (name && f)
		f(name);
	return;
}
