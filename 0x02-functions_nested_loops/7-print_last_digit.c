#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - last digit
 *@digit: any real number
 *
 *Description: number modulos 10 where remainder is last digit
 *Return: Always 0
 */

int print_last_digit(int digit)
{
	int last;

	last = digit % 10;
	if (last > 0)
		_putchar(last + '0' );
	else
		_putchar(-last + '0');
	return (-last);
}
