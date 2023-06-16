#include <stdio.h>

/**
*main - print alphabet in lowercase
*Description: prints out all alphabet except the letter q and e
*Return: Always 0 (successful)
*/

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter == q || letter == e)
{
continue;
}
putchar(letter);
letter++;
}
return (0);
}
