#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char d;

	while (i++ <= 9)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);
		_putchar('\n');
	}
}
