#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0-14
 */

void more_numbers(void)
{
	int k, l;

	for (k = 1; k <= 10; k++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
				_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
		}
	}
}
