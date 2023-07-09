#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Entry point
 *@argc: number os arguements passed
 *@argv: A pointer to a string
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
		       	{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("0\n");
	}
	printf("%d\n", sum);
        return (0);
}
