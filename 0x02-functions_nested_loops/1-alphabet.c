#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
