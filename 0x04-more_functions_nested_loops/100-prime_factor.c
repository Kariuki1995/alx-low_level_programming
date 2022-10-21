#include <stdio.h>

/**
 * main - starting point of the program
 * Return: Returns 0 if success
 */

int main(void)
{
	unsigned long i, n = 612852475143;

	for (i = 2; n > 1; i++)
	{
		while (n % 1 == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", i  - 1);
	return (0);
}
