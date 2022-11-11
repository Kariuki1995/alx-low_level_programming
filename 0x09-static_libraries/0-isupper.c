#include "main.h"

/**
 * _isupper - checks if character is upper or lowercase
 * @c: argument of _isupper function
 * Return: returns 1 if character is uppercase,0 if otherwise
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;
	else
		result = 0;
	return (result);
}
