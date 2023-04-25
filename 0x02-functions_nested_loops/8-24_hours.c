#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: every minute
 */

void jack_bauer(void)
{
	int d, e, b, k;

	for (d = 0; d <= 2; d++)
	{
	for (e = 0; e <= 9; e++)
	{
	if ((d <= 1 && e <= 9) || (d <= 2 && e <= 3))
	{
	for (b = 0; b <= 5; b++)
	{
	for (k = 0; k <= 9; k++)
	{
		_putchar(d + '0');
		_putchar(e + '0');
		_putchar(58);
		_putchar(b + '0');
		_putchar(k + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
