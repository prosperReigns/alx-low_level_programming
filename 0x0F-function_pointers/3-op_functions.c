#include "3-calc.h"

/**
 *op_add - adds two numbers
 *@a: first operand
 *@b: second operand
 *Return: an integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtract two numbers
 *@a: first operand
 *@b: second operand
 *Return: an integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: first operand
 *@b: second operand
 *Return: an integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *@a: first operand
 *@b: second operand
 *Return: an integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - gets remainder of the division of two numbers
 *@a: first operand
 *@b: second operand
 *Return: an integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
