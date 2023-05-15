#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimeansional array of integers
 * @width: width
 * @height: height
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		c[i] = malloc(sizeof(int) * width);
		if (c[i] == NULL)
		{
			for (; i >= 0; i--)
			free(c[i]);

			free(c);
			return (NULL);
		}
	}
	for (i = 0; i <  height; i++)
	{
		for (j = 0; j < width; j++)
		c[i][j] = 0;
	}
	return (c);
}
