#include "main.h"

/**
 *print_binary -coverts a decimal number into binary
 *@n: a positive integer
 *Return: void
 */

void print_binary(unsigned long int n)
{
int leading_zero = 1, bitval, bit;

bitval = sizeof(int) * 8 - 1;
while (bitval >= 0)
{
bit = (n >> bitval) &1;
if (bit == 1)
{
leading_zero = 0;
_putchar('1');
}
else if (!leading_zero)
{
_putchar('0');
}
bitval--;
}
if (leading_zero)
_putchar('0');
}
