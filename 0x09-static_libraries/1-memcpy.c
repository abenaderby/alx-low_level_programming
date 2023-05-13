#include "main.h"

/**
 * _memcpy - copies bytes from memory
 * @n: number
 * @src: bytes from memory area
 * @dest: memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}
	return (dest);
}
