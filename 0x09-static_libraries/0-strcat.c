#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: (0) Always
 */

char *_strcat(char *dest, char *src)
{
	int l, k;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	for (k = 0; src[k] != '\0'; k++, l++)
	{
		dest[l] = src[k];
	}
	dest[l] = '\0';
	return (dest);
}
