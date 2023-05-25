#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: (0) Always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list fig;

	va_start(fig, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(fig, int));
		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(fig);

	printf("\n");
}
