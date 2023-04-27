#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Character
 * Return: 1 if it is uppercase and 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
