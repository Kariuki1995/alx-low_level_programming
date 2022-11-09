#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the gird
 * Return: returns pointer to a 20 array,otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * width);

		if (x[i] == NULL)
		{
			while (i >= 0)
			{
				free(x[i]);
				i--;
			}
			free(x);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	}
	return (x);
}
