#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguements passed
 *@argv: a pointer to a string
 *Return: Always 0
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
