#include "main.h"

/**
 *main - print "_putchar"
 *
 *Return: Always 0
 */

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
