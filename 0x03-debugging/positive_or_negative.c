#include "main.h"

/**
 * main - Determine if the number is positive, negative or zero
 * @i: the number to check
 * Return: 1 if i is positive, -1 if i is negative and 0 if i is zero
 */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
