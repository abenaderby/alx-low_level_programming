#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int word = 0;

	while (s[word])
	{
		while (!(s[word] >= 'a' && s[word] <= 'z'))
			word++;

		if (s[word - 1] == ' ' ||
			s[word - 1] == '\t' ||
			s[word - 1] == '\n' ||
			s[word - 1] == ',' ||
			s[word - 1] == ';' ||
			s[word - 1] == '.' ||
			s[word - 1] == '!' ||
			s[word - 1] == '?' ||
			s[word - 1] == '"' ||
			s[word - 1] == '(' ||
			s[word - 1] == ')' ||
			s[word - 1] == '{' ||
			s[word - 1] == '}' ||
			word == 0)

			s[word] -= 32;
		word++;
	}

	return (s);
}
