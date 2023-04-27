#include "main.h"

/**
 * _isdigit - checks for a digit, 0 to 9
 * @c: character
 * Return: 1 if it is a digit and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
