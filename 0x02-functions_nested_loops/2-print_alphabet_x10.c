#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ab;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (ab = 'a'; ab <= 'z'; ab++)
			_putchar(ab);
		_putchar('\n');
	}
}
