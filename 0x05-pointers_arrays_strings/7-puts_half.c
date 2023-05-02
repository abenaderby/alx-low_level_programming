#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: (0) Always
 */

void puts_half(char *str)
{
	int s, hs;

	s = 0;
	while (str[s] != '\0')
		s++;
	hs = s / 2;

	if (s % 2 == 1)
		hs++;
	while (hs < s)
	{
		_putchar(str[hs]);
		hs++;
	}
	_putchar('\n');
}
