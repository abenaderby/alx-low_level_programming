#include "main.h"

/**
 * _memset - fills the first byte of memory
 * @s: memory area
 * @b: constant byte
 * @n: number
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
