#include "main.h"
/**
 *print_alphabet - print alphabets
 *Description: alphabet a-z in lowercase
 *Return: Always void
 */

void print_alphabet()
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return;
}
