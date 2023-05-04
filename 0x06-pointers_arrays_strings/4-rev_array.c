#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	n = n - 1;
	k = 0;
	while (k <= n)
	{
		i = a[k];
		a[k++] = a[n];
		a[n--] = i;
	}
}
