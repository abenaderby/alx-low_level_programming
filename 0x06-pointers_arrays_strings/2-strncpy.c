#include "main.h"

/**
 * _strncpy - copies a string
 * @src: source string
 * @dest: destination string
 * @n: value
 * Return: (0) Always
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	dest[k] = src[k];

	for (; k < n; k++)
	dest[k] = '\0';

	return (dest);
}
