#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: pointer to an array off commands
 * Return: returns 0 if succesful
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
