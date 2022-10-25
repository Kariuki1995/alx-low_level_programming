#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @c: first integer
 * @d: second integer
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
