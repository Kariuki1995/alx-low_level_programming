#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: command line argument count
 * @argv: pointer to an array of commands
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
