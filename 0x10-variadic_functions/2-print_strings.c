#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: (0) Always
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int num;

	va_list string;

	va_start(string, n);

	for (num = 0; num < n; num++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(string);

	printf("\n");
}
