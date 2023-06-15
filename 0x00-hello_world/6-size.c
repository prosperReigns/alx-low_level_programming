#include <stdio.h>

/**
*main - Entry point
*Description: prints out the memi=ory size of various data types
*Return: Always 0 (success)
*/

int main()
{
char c;
int i;
long int a;
long long int v;
float f
printf("Size of a char: %c\n", sizeof(c));
printf("Size of an int: %d\n", sizeof(i));
printf("Size of a long int: %li\n", sizeof(a));
printf("Size of a long long int: %lli\n", sizeof(v));
printf("Size of a float: %lu\n", sizeof(f));
return (0);
}
