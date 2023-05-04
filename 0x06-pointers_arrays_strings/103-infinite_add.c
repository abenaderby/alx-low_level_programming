#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d = 0, e = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + d) != '\0')
		d++;
	while (*(n2 + e) != '\0')
		e++;
	if (d >= e)
		bg = d;
	else
		bg = e;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	d--, e--, size_r--;
	dr1 = *(n1 + d) - 48, dr2 = *(n2 + e) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (d > 0)
			d--, dr1 = *(n1 + d) - 48;
		else
			dr1 = 0;
		if (e > 0)
			e--, dr2 = *(n2 + e) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
