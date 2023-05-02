#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: (0) Always
 */

int main(void)
{
	int i = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		i = rand() % 128;
		if ((c + i) > 2772)
			break;
		c = c + i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
