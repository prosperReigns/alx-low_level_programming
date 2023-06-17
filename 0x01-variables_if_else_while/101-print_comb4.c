#include <stdio.h>

/**
*main - combine three digit
*Description: Three variables of data type int
*first variable stores positional value of hundred
*second variable stores positional value of tenth
*third variable stores positional value of unit
*Return: Always 0 (successful)
*/

int main(void)
{
	int num = 0;
	int first, second, third;

	while (num < 999)
	{
		first = num / 100;
		second = (num / 10) % 10;
		third = num % 10;
		if ((first <= second) <= third)
		{
			putchar(first + '0');
			putchar(second + '0');
			putchar(third + '0');
			if (first != 7 || second != 8 || third != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
