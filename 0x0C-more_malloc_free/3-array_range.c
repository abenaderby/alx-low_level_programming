#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int k, results;

	if (min > max)
		return (NULL);

	results = max - min + 1;

	p = malloc(sizeof(int) * results);

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		p[k] = min++;

	return (p);
}
