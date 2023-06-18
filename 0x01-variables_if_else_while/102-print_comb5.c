#include <stdio.h>
/**
*main - two two digit combination
*Description: Two variables of data type integer
*first variable holds the first two digit
*second variable holds secont two digits
*Return: Always o (successful)
*/

int main(void)
{
	int first, second;

	for (first = 0; first < 99; first++)
	{
		for (second = 0; second < 99; second++)
		{
			putchar(first / 10 + '0');
			putchar(first % 10 + '0');
			putchar(' ');
			putchar(second / 10 + '0');
			putchar(second % 10 + '0');
			if (first != 98 && second != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
