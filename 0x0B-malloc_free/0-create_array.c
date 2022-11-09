#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to initialize the array
 * Return: returns 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *chars;

	if (size == 0)
		return (null);

	chars = (char *)malloc(sizeof(char) * size);

	if (chars == NULL)
		return (NULL);
	while (i < size)
	{
		*(chars + i) = c;
		i++;
	}
	return (chars);
}
