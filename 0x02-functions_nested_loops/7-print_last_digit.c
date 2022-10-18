#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number of interest
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last digit = n % 10;

	if (last digit < 0)
		last digit *= -1;
	_putchar(last digit + '0');

	return (0);
}
