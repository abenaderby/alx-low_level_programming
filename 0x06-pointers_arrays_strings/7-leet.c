#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: string
 * Return: (0) Always
 */

char *leet(char *n)
{
	int k, l;
	char b1[] = "aAeEoOtTlL";
	char b2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (n[k] == b1[l])
			{
				n[k] = b2[l];
			}
		}
	}
	return (n);
}
