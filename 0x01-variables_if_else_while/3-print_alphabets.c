#include <dstdio.h>
/*
*main - Entry point
*Description: prints alphabet a-z in lowercase and uppercase
 *Return: Always 0 (successful)
 */

int main(void)
{
char lower = 'a';
char upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++
}
while (upper <= 'Z')
{
putchar(upper);
upper++
}
putchar('\n');
return (0);
}
