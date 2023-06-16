#include <stdio.h>

/**
*main - output number 0 - 9
*Description: int is converted to ascii and outputed and printed
*Return: Always 0 (successful)
*/

int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
