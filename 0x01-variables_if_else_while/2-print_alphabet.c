#include <stdio.h>

/**
*main - Entry point
*Description: prints a-z
*Return: Always 0 (successful)
*/

int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
return (0);
}
