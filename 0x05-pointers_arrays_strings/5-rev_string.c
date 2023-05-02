#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: (0) Always
 */

void rev_string(char *s)
{
	int k = 0;
	int i;
	char vs = s[0];

	while (s[k] != '\0')
		k++;
	for (i = 0; i < k; i++)
	{
		k--;
		vs = s[i];
		s[i] = s[k];
		s[k] = vs;
	}
}
