#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sum up arguments
 *@n: number of arguements
 *Return: Always sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list num;

	if (n == 0)
		return (-1);

	va_start(num, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}
	va_end(num);
	return (sum);
}
