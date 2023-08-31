#include "main.h"

/**
 *flip_bits -flips a bit
 *@n: an integer in base 10
 *@m: an integer in base 10
 *Return: flipped digit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result;
unsigned int counter = 0;

xor_result = n ^ m;
while (xor_result != 0)
{
counter += xor_result & 1;
xor_result >>= 1;
}
return (counter);
}
