#include "main.h"

/**
 * print_numbers - print the numbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char ab;

	for (ab = '0'; ab <= '9'; ab++)
	{
		_putchar(ab);
	}
	_putchar('\n');
}
