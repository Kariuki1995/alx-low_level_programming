#include <stdio.h>

/**
 * main - start of program
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	for (i = '0'; i < '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = '0'; k < '9'; k++)
			{
				if (!((i == j) || (j == k) || (j > i) || (k > j)))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '9' && j == '8' && k == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
