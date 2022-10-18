#include <stdio.h>

/**
 * main - prints in lower and upper case
 * Return: 0
 */
int main(void)
{
	char ch;

	for (char = 'a' ; char <= 'z' ; char++)
	{
		putchar(ch);
	}
	for (char = 'A' ; char <= 'Z' ; char++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
