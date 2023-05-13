#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: the integer
 */

int _atoi(char *s)
{
	int t, d, n, l, f, g;

	t = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	g = 0;

	while (s[l] != '\0')
		l++;

	while (t < l && f == 0)
	{
		if (s[t] == '-')
			++d;

		if (s[t] >= '0' && s[t] <= '9')
		{
			g = s[t] - '0';
			if (d % 2)
				g = -g;
			n = n * 10 + g;
			f = 1;
			if (s[t + 1] < '0' || s[t + 1] > '9')
				break;
			f = 0;
		}
		t++;
	}

	if (f == 0)
		return (0);

	return (n);
}
