#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int num;
	int sum = 0;

	va_start(ls, n);

	for (num = 0; num < n; num++)
		sum += va_arg(ls, int);

	va_end(ls);

	return (sum);
}
