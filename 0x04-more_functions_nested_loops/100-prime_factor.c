#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: 0 Always
 */

int main(void)
{
	long int n, ab;

	n = 612852475143;
	for (ab = 2; ab <= n; ab++)
	{
		if (n % ab == 0)
		{
			n /= ab;
			ab--;
		}

	}
	printf("%ld\n", ab);
	return (0);
}
