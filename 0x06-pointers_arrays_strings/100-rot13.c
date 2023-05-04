#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string
 * Return: 0
 */

char *rot13(char *n)
{
	int k;
	int l;

	char b1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (n[k] == b1[l])
			{
				n[k] = b2[l];
				break;
			}
		}
	}
	return (n);
}
