#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @c: first integer
 * @d: second integer
 * @e: third integer
 * Return: largest number
 */
int largest_number(int c, int d, int e)
{
	int largest;

	if (c >= d && c >= e)
	{
		largest = c;
	}
	else if (d >= c && d >= e)
	{
		largest = d;
	}
	else if (e >= c && e >= d)
	{
		largest = e;
	}

	return (largest);
}

