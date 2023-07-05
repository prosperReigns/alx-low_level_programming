#include "main.h"

/**
 *factorial - factorises a number
 *@n: An integer to be factorised
 *Return: Always an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
