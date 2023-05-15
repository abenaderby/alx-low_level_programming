#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function that counts the number of words in a string
 * @s: string
 * Return: number of words
 */
int count_word(char *s)
{
	int f, c, r;

	f = 0;
	r = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			r++;
		}
	}

	return (r);
}
/**
 * **strtow - function that splits a string into words
 * @str: string
 * Return: (0) Always
 */
char **strtow(char *str)
{
	char **m, *p;
	int i, k = 0, l = 0, w, c = 0, start, end;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				p = (char *) malloc(sizeof(char) * (c + 1));
				if (p == NULL)
					return (NULL);

				while (start < end)
				*p++ = str[start++];
				*p = '\0';
				m[k] = p - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	m[k] = NULL;

	return (m);
}
