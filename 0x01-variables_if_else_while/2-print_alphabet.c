#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lower case
 * Return: Always (0) success
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
