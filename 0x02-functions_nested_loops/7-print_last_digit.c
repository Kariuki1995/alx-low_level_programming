#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number of interest
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last digit;

	if (n < 0)
	{
		last digit = (n % 10) * -1;
	}
	else
	{
		last digit = num % 10;
	}
	_putchar(last digit + '0');

	return (last digit);
}
