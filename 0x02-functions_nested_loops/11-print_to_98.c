#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints matural numbers
 *@n: integer is an arguemant
 *
 *Description: if number is greater than 98 decreament else increament
 *Return: No value returned
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j > 98)
			{
			printf(",");
			printf(" ");
			}
		}
		printf("\n");
	}
	else
	{
		int i;

		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
			printf(",");
			printf(" ");
			}
		}
		printf("\n");
	}
}
