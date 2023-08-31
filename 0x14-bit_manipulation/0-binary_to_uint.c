#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *binary_to_unit - converts binary to decimal number system
 *@b: binary string
 *Return: decimal coefficient of binary
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int binary, len, decimal = 0, decval = 1;

if (b == NULL)
return (0);
len = strlen(b);
while (len)
{
binary = b[len - 1] - '0';
if (binary != 0 && binary != 1)
{
decimal = 0;
return (decimal);
}
if (binary == 1)
{
decimal += decval;
}
decval *= 2;
len--;
}
return (decimal);
}
