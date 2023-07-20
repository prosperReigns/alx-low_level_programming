#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_numbers - prints numbers
 *@separator: symbol for seperating two numbers
 *@n: number of arguements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	if (n == 0)
		exit(EXIT_FAILURE);
	va_start(num, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(num, int));
		if (separator == NULL)
			printf(" ");
		else if (i != (n - 1))
			printf("%c ", *separator);
		i++;
	}
	printf("\n");
}
