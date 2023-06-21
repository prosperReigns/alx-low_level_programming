#include "main.h"

/**
 *print_sign - shows what sign a number has
 *@n: any integer
 *
 *Description: checks a number's sign and output equivalent +,-
 *Return: Always res
 */

int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		res = 0;
	}
	else
	{
		_putchar('-');
		res = -1;
	}
	return (res);
}
