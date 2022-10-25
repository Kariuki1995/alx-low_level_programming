#include "main.h"

/**
 * main - generates a random password
 * Return: returns 0 if successful
 */

int main(void)
{
	char password[10];
	char num[] = "0123456789";
	int num_length = strlen(num);
	char symb[] = "!@#$%^&*()";
	int symbol_length = strlen(symb);
	char lowletters[] = "abcdefghijklmnopqrstuvwxyz";
	int low_length = strlen(lowletters);
	char upperletters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int upper_length = strlen(upperletters);
	int i;

	srand(time(NULL));
	for (i = 0; i <= 10; i++)
	{
		int randomchar = rand() % 4;

		if (randomchar == 0)
		{
			password[i] = num[rand() % num_length];
			printf("%c", password[i]);
		}
		else if (randomchar == 1)
		{
			password[i] = symb[rand() % symbol_length];
			printf("%c", password[i]);
		}
		else if (randomchar == 2)
		{
			password[i] = lowletters[rand() % low_length];
			printf("%c", password[i]);
		}
		else
		{
			password[i] = upperletters[rand() % upper_length];
			printf("%c", password[i]);
		}
	}
	return (0);
}
