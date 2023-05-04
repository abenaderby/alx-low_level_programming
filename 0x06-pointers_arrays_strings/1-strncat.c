#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int k;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[l] = src[k];
		l++;
		k++;
	}
	dest[l] = '\0';
	return (dest);
}
