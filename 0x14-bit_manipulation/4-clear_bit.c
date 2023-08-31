#include "main.h"

/**
 *clear_bit - clears a bit- set it to 0
 *@n: a pointer to an integer
 *@index: index = 0
 *Return: 0 onsuccess
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitval, mask;

bitval = sizeof(unsigned long int) * 8;
if (index >= bitval)
return (-1);
mask = 1 << index;
mask = ~mask;
*n &= mask;
return (0);
}
