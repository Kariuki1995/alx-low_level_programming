#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
		for (minute = 0; minute < 60; minute++)
		{
			int a = hour / 10;
			int b = hour % 10;
			int c = minute / 10;
			int d = minute % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
}
