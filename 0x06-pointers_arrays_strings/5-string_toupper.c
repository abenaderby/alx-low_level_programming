#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @n: pointer
 * Return: string
 */

char *string_toupper(char *n)
{
	int p;

	p = 0;
	while (n[p] != '\0')
	{
		if (n[p] >= 'a' && n[p] <= 'Z')
			n[p] = n[p] - 32;
		p++;
	}
	return (n);
}
