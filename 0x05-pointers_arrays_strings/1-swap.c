#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @c: first integer
 * @d: second integer
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
