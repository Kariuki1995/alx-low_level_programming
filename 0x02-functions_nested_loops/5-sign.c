#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: is the number to be checked
 * Return: 1 if n is greater than zero,0 if n is zero,-1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
