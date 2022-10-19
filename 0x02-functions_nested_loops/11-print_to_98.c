#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from input to 98
 * @n: the starting number
 */

void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; n >= 98; i--)
		{
			printf("%d", i);
			if (i >98)
				printf(",");
		}
	}
	else if (n <= 98);
	{
		for (i = n; n <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(",");
		}
	}
	printf("\n");
}
