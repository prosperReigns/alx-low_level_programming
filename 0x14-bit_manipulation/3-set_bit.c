#include "main.h"

/**
 *set_bit - sets bit at an index to 1
 *@n: a pointer to an integerin base 10
 *@index: index  = 0
 *Return: 1 onsuccess
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bitval, mask;

bitval = sizeof(unsigned long int) * 8;
if (index >= bitval)
return (-1);
mask = 1 << index;
*n |= mask;
return (1);
}
