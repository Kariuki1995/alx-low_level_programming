#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: arguemnt of function *cap_string
 * Return: returns a capitalised string
 */

char *cap_string(char *s)
{
	int i, j;
	int separator[14] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j <= 13; j++)
		{
			if (*(s + i - 1) == separator[j] && *(s + i) >= 97 && *(s + i) <= 122)
				*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}
