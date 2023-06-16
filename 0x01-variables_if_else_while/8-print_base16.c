#include <stdio.h>

/**
*main - print hexadecimal values
*Description: using putchar function int are converted to ascii
*characters are printed along side int
*Return: Always 0 (successful)
*/

int main(void)
{
int num, ch;
num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
ch = 'a';
while (ch < 'g')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
