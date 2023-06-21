#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour < 24;hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minutes / 10);
			_putchar(minutes % 10);
		}
		_putchar('\n');
	}
}
