#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	char ab;

	for (ab = '0'; ab <= '9'; ab++)
	{
		if (ab != '2' && ab != '4')
			_putchar(ab);
	}
	_putchar('\n');
}
