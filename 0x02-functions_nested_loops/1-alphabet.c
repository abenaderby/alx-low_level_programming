#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		_putchar(ab);

	_putchar('\n');
}
