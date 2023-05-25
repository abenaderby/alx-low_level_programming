#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: (0) Always
 */
void print_all(const char * const format, ...)
{
	int num = 0;
	char *str, *sep = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[num])
		{
			switch (format[num])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					num++;
					continue;
			}
			sep = ", ";
			num++;
		}
	}
	va_end(ls);

	printf("\n");
}
