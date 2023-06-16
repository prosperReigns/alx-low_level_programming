#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - check number
*Description: checks number for precedding sign
*Return: Always 0 (successful)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if(n > 0)
{
printf("is positive\n");
}
else if(n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}

return (0);
}
