#include "main.h"

/**
 * _strcmp - functions that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: (0) Always
 */

int _strcmp(char *s1, char *s2)
{
	int l, d;

	l = 0;
	while (s1[l] == s2[l] && s1[l] != '\0')
	{
		l++;
	}

	d = s1[l] - s2[l];
	return (d);
}
