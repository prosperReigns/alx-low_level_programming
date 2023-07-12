#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: number os arguements passed
 *@argv: A pointer to a string
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, operand1, operand2, result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			operand1 = atoi(argv[1]);
			operand2 = atoi(argv[2]);
			result = operand1 * operand2;
		}
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	printf("%d", result);
	printf("\n");
	return (0);
}
