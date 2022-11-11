#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: _isdigit function argument
 * Return: return 1 if it's a digit
 */

int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;
	else
		result = 0;

	return (result);
}
