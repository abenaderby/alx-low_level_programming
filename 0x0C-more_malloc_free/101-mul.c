#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks if a string contains a non-digit character
 * @s: string
 * Return: 0 if a non-digit is found otherwise 1
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array
 * Return: (0) Always
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, c, t1, t2, *results, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	results = malloc(sizeof(int) * l);
	if (!results)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		results[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		t1 = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			t2 = s2[l2] - '0';
			c += results[l1 + l2 + 1] + (t1 * t2);
			results[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			results[l1 + l2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (results[i])
			a = 1;
		if (a)
			_putchar(results[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(results);
	return (0);
}
