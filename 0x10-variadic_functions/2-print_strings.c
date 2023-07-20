#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings
 *@separator: symbol thats separates two string
 *@n: number of arguements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list string;

	if (n != 0)
	{
		va_start(string, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(string, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");

			if ((i != (n - 1)) && (separator != NULL))
				printf("%s", separator);
		}
	}
		printf("\n");
}
