#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *link;
	int k, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = m = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[m] != '\0')
		m++;
	link = malloc(sizeof(char) * (k + m + 1));

	if (link == NULL)
		return (NULL);
	k = m = 0;
	while (s1[k] != '\0')
	{
		link[k] = s1[k];
		k++;
	}

	while (s2[m] != '\0')
	{
		link[k] = s2[m];
		k++, m++;
	}
	link[k] = '\0';
	return (link);
}
