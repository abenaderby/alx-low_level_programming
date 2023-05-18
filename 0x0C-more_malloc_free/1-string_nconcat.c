#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int d = 0, j = 0, k = 0,  m = 0;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[m])
		m++;

	if (n < m)
		s = malloc(sizeof(char) * (k + n + 1));
	else
		s = malloc(sizeof(char) * (k + m + 1));

	if (!s)
		return (NULL);

	while (d < k)
	{
		s[d] = s1[d];
		d++;
	}

	while (n < m && d < (k + n))
		s[d++] = s2[j++];

	while (n >= m && d < (k + m))
		s[d++] = s2[j++];

	s[d] = '\0';

	return (s);
}
