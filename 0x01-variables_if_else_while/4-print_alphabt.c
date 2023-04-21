#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0) success
 */
int main(void)
{
	char ln;

	for (ln = 'a'; ln <= 'z'; ln++)
	{
		if (ln != 'e' && ln != 'q')
			putchar(ln);
	}

	putchar('\n');
	return (0);
}
