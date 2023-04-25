#include "main.h"

/**
 * print_sign -  prints the sign of a number
 * @n: The number
 * Return: 1 if number is greater than zero, 0 if number is zero or
 * -1 if number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
