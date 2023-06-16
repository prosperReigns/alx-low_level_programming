#include <stdio.h>
/**
*main - Print alphabets
*
*Description: This function prints out alphabet letter a-z in lowercase
*it also prints alphabet lettered A-Z
*this function prints both on the same line
*Return: Always 0 (successful)
*/

int main(void)
{
char lower = 'a';
char upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
