#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: number of interest
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int lastdigit;

	if (num < 0)
	{
		lastdigit = (num % 10) * -1;
	}
	else
	{
		lastdigit = num % 10;
	}
	_putchar(lastdigit + '0');

	return (lastdigit);
}
