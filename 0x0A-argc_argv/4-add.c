#include "main.h"

/**
 * main - adds positive numbers
 * @argc: command line argument count
 * @argv: pointer to an array of commands
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, x, i;
	char *p;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], &p, 10);
		if (*p)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
