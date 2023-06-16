#include <stdio.h>

/**
*main - Entry point
*Description: digit 0 to 9 separated by a comma and space
*Return: Always 0 (successful)
*/

int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
