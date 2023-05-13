#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character
 * Return: 1 for lowercase character or 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
