#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first array
 * @max: second array
 * Return: returns NULL otherwise a pointer to new array
 */

int *array_range(int min, int max)
{
	int i, length = 0, j = 0;
	int *p;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	p = malloc(sizeof(int) * length);

	if (p == NULL)
		return (NULL);
	i = min;
	while (j < length)
	{
		p[j] = i;
		j++;
		i++;
	}
	return (p);
}
