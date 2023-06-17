#include <stdio.h>

/**
*main - combine two digits
*Description: Two variable of type int to store two digits
*first varible holds digit with position value tenth
*second variable holds digit with positional value unit
*assuming the number is 0
*Return:  Always 0 (successful)
 */

int main(void)
{
	int num = 0;
	int first, second;

	while (num < 99)
	{
		first = num / 10;
		second = num % 10;
		if (first < second)
		{
			putchar(first + '0');
			putchar(second + '0');
		}
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
