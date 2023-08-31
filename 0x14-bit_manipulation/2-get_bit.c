#include "main.h"
/**
 *get_bit - get bit at a given index
 *@n: integer in base 10
 *@index: index = 0
 *Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bitval, mask;

bitval = sizeof(unsigned long int) * 8;
if (index >= bitval)
return (-1);
mask = 1 << index;
if ((n & mask) != 0)
{
return (1);
}
else
{
return (0);
}
}
