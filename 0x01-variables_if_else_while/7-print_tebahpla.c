#include <stdio.h>

/**
*main - Alphabet in reverse
*Description: using a decreament operator alphabet is re-engineered
*Return: Always 0 (sucessful)
*/

int main(void)
{
char alphabet = 'z';
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
