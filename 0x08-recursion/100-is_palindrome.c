#include "main.h"

int check_ans(char *s, int k, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - finds if a string is a palindrome
 * @s: string
 * Return: results
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_ans(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - finds the length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_ans - finds if its recursive
 * @s: string
 * @k: value
 * @l: length
 * Return: results
 */
int check_ans(char *s, int k, int l)
{
	if (*(s + k) != *(s + l - 1))
		return (0);
	if (k >= l)
		return (1);
	return (check_ans(s, k + 1, l - 1));
}
