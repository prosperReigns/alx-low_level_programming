#include "main.h"

/**
 *_isalpha - checkm for uppercase
 *@c: Any character/number
 *
 *Description: result is 1 if number is between 65 and 90
 *Return: Always res
 */

int _isalpha(int c)
{
	int res;

	if (c >= 65 && c <= 122)
		res = 1;
	else
		res = 0;
	return (res);
}
