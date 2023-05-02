#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int a
 * @b: int b
 * Return: (0) Always
 */

void swap_int(int *a, int *b)
{
	int two;

	two = *a;
	*a = *b;
	*b = two;
}
